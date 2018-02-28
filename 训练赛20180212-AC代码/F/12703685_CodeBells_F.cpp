#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<stdlib.h>
using namespace std;
#define maxn 10005

int main()
{
    int n,x;
    int i;
    int a;
    while(~scanf("%d%d",&n,&x))
    {
        int sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            sum+=a;
        }
        if(sum==x-n+1) printf("YES\n");
        else printf("NO\n");
    }
}