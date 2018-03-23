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
    url='http://www.mzitu.com/page/{}'.format(num)
    res=requests.get(url).content
    sel=html.fromstring(res)
    urls=[]
    for i in sel.xpath("//ul[@id='pins']/li/a/@href"):
        urls.append(i)
        print(i)
    return urls

def download_image(url):
    res=requests.get(url).content
    sel=html.fromstring(res)
    image_amount=sel.xpath("//div[@class='pagenavi']/a[last()-1]/span/text()")[0]
    image_title=sel.xpath("//h2[@class='main-title']/text()")[0]
    cnt=1
    file_path='/mnt/c/Test/img/'+image_title
    #file_path='/home/wild/Test/img/'+image_title
    if not os.path.exists(file_path):
        print('build ',file_path)
        os.makedirs(file_path)
    for i in range(int (image_amount)):
        try:
            image_detail_link='{}/{}'.format(url,i+1)
            res=requests.get(image_detail_link).content
            sel=html.fromstring(res)
            image_download_link=sel.xpath("//div[@class='main-image']/p/a/img/@src")[0]
            filename=file_path+'/%s.jpg'%(cnt)
            print('downloading: %s %s/%s'%(image_title,cnt,image_amount))
            with open(filename,'wb+') as f:
                f.write(requests.get(image_download_link,headers=header(image_download_link)).content)
                time.sleep(0.5)
            cnt+=1
        except:
            pass

if __name__=='__main__':
    page_number=input('input page number: ')
    page = get_page_number(page_number)
    #with ThreadPool(4) as pool:
    #    pool.map(download_image,page)
    for i in page:
        download_image(i)
