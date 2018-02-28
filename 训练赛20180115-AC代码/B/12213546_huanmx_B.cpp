#include<stdio.h>
#include<iostream>
#include<string.h>
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
        if(prev[fx]==0||prev[fy]==0)
        {
            prev[fx]=0;
            prev[fy]=0;
        }
        else
        {
            prev[fx]=fy;
        }
    }
}

int main()
{
    int prev[50010];
    int n,m;
    scanf("%d%d",&n,&m);
    int a,b;
    for(int i=0;i<n;i++)
        prev[i]=i;
    for(int i=0;i<m;i++)
    {
        scanf("%d%d",&a,&b);
        join(a,b,prev);
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(Find(i,prev)==0)
            cnt++;
    }
    printf("%d\n",cnt);
}
