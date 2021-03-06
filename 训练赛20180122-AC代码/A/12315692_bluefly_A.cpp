#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int  pre[1050];
bool t[1050];

int Find(int x)
{
    int r=x;
    while(r!=pre[r])
        r=pre[r];

    int i=x,j;
    while(pre[i]!=r)
    {
        j=pre[i];
        pre[i]=r;
        i=j;
    }
    return r;
}

void mix(int x,int y)
{
    int fx=Find(x),fy=Find(y);
    if(fx!=fy)
    {
        pre[fy]=fx;
    }
}

int main()
{
    int N,M,a,b,i,j,ans;
    int k;
    scanf("%d",&k);

    while(k--)
    {
        scanf("%d%d",&N,&M);
        for(i=1;i<=N;i++)
            pre[i]=i;

        for(i=1;i<=M;i++)
        {
            scanf("%d%d",&a,&b);
            mix(a,b);
        }
        memset(t,0,sizeof(t));
        for(i=1;i<=N;i++)
        {
            t[Find(i)]=1;
        }
        for(ans=0,i=1;i<=N;i++)
            if(t[i])
                ans++;

        printf("%d\n",ans);

    }
    return 0;
}