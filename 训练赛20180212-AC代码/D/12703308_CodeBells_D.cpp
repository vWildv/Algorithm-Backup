#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<stdlib.h>
using namespace std;


int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int i,num;
        int sum;
        int cnt=0;
        for(i=19;;i++)
        {
            sum=0;
            num=i;
            while(num>0)
            {
                sum+=num%10;
                num/=10;
            }
            if(sum==10)cnt++;
            if(cnt==n) break;
        }
        printf("%d\n",i);
    }
}
