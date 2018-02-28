#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define maxn 101000
#define ll long long
ll p[maxn];
int vis[maxn];
ll d[maxn];
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        memset(vis,0,sizeof(vis));
        memset(d,0,sizeof(d));
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&p[i]);
        }
        int cnt,temp,cas=0;
        for(int i=1;i<=n;i++)
        {
            if(vis[i])continue;
            temp=p[i];
            vis[temp]=1;
            cnt=1;
            while(temp!=i)
            {
                cnt++;
                temp=p[temp];
                vis[temp]=1;
            }
            d[++cas]=cnt;
        }
        sort(d+1,d+cas+1);
        ll t=d[cas]+d[cas-1],sum=0;
        sum=sum+t+t*(t-1);
        for(int i=cas-2;i>=1;i--)
        {
            sum+=(d[i]*(d[i]-1)+d[i]);
        }
        printf("%lld\n",sum);

    }
}
