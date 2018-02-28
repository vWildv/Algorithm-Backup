#include<algorithm>
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        int sum=0;
        int sum2=0;
        int vis[n];
        memset(vis,0,sizeof(vis));
        for(int i=0;i<n-1;i++)
        {
            vis[i]=1;
            for(int j=i+1;j<n;j++)
            {
                if(a[i]<a[j]&&vis[j]==0){
                        sum++;
                vis[j]=1;
                break;}
            }
        }
        printf("%d\n",sum);
    }
}
