#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int Find(int x,int prev[])
{
    int r=x;
    while(r!=prev[r])
        r=prev[r];
    int i=x,j;
    while(i!=r)
    {
        j=prev[i];
        prev[i]=r;
        i=j;
    }
    return r;
}

void join(int x,int y,int prev[])
{
    int fx=Find(x,prev);
    int fy=Find(y,prev);
    if(fx!=fy)
    {
        prev[fy]=fx;
    }
}

int main()
{
    int T;
    while(scanf("%d",&T)!=EOF)
    {
        int n,m;
        while(T--)
        {
            bool t[10000];
            int prev[10000];
            memset(t,false,sizeof(t));
            scanf("%d%d",&n,&m);
            int a,b;
            int cnt=0;
            for(int i=1;i<=n;i++)
                prev[i]=i;
            for(int i=0;i<m;i++)
            {
                scanf("%d%d",&a,&b);
                join(a,b,prev);
            }
            for(int i=1;i<=n;i++)
            {
                t[Find(i,prev)]=true;
            }
            for(int i=1;i<=n;i++)
                if(t[i])
                cnt++;
            printf("%d\n",cnt);
        }
    }
}
