# coding:utf-8 
import os
import time
from multiprocessing.dummy import Pool as ThreadPool

import requests
from lxml import html 


def header(url):
    headers={
        'Host': 'i.meizitu.net',
        'Pragma': 'no-cache',
        'Accept-Encoding': 'gzip, deflate',
        'Accept-Language': 'zh-CN,zh;q=0.8,en;q=0.6',
        'Cache-Control': 'no-cache',
        'Connection': 'keep-alive',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_12_5) AppleWebKit/537.36 (KHTML, like Gecko) '
                      'Chrome/59.0.3071.115 Safari/537.36',
        'Accept': 'image/webp,image/apng,image/*,*/*;q=0.8',
        'Referer': '{}'.format(url),
    }
    return headers

def get_page_number(num):
    url='http://www.mmjpg.com/home/'+num
    response=requests.get(url).content
    selector=html.fromstring(response)
    urls=[]
    for i in selector.xpath("//ul/li/a/@href"):
        urls.append(i)
        print(i)
    return urls

def download_image(url):
    response=requests.get(url).content
    selector=html.fromstring(response)
    image_amount=selector.xpath("//div[@class='page']/a[last()-1]/text()")[0]
    image_title=selector.xpath("//h2/text()")[0]
    num=1
    file_path='c:/Test/img/'+image_title
    if not os.path.exists(file_path):
        print('build',file_path)
        os.makedirs(file_path)
    for i in range(int (image_amount)):
        try:
            image_detail_link='{}/{}'.format(url,i+1)
            response=requests.get(image_detail_link).content
            sel=html.fromstring(response)
            image_download_link=sel.xpath("//div[@class='content']/a/img/@src")[0]
            filename = file_path+'/%s%s.jpg'%(image_title,num)
            print('downloading: %s %s/%s'%(image_title,num,image_amount))
            with open(filename,'wb+') as f:
                f.write(requests.get(image_download_link,headers=header(image_download_link)).content)
                time.sleep(0.5)
            num+=1
        except:
            pass

if __name__ =='__main__':
    page_number = input('input page number: ')
    page=get_page_number(page_number)
    with ThreadPool(4) as pool:
        pool.map(download_image,page)
    #for i in page:
    #    download_image(i)
