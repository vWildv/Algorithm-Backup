#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[1005],vis[1005];
    while(scanf("%d",&n)!=EOF)
    {
        memset(vis,0,sizeof(vis));
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        int cnt,sum=0;
        for(int i=0; i<n; i++)
        {
            cnt=a[i];
            for(int j=i+1; j<n; j++)
                if(a[j]>cnt&&(!vis[j]))
                {
                    sum++;
                    vis[j]=1;
                    break;
                }
        }
        printf("%d\n",sum);
    }
    return 0;
}

