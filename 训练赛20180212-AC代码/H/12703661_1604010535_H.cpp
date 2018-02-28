#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,t;
    scanf("%d%d",&n,&t);
    int a;
    int sum=0,flag=0;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(flag)continue;
        sum+=(86400-a);
        ans++;
        if(sum>=t)flag=1;

    }
    printf("%d\n",ans);
}
