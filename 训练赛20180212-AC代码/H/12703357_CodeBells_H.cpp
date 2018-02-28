#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<stdlib.h>
using namespace std;
#define maxn 205


int main()
{
    int n,t;
    int day[maxn];
    while(~scanf("%d%d",&n,&t))
    {
        int i,sum=0;;
        for(i=0;i<n;i++)
            scanf("%d",&day[i]);
        for(i=0;i<n;i++)
        {
            sum+=86400-day[i];
            if(sum>=t) break;
        }
        printf("%d\n",i+1);
    }
}
