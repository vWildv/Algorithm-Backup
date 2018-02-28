#include<stdio.h>
#include<iostream>
#include<cstdio>
#include<string.h>
#include<math.h>
using namespace std;
int a[60005];
int vis[10000];
int n,m;
void   chushi()
{
    for(int i=0;i<n;i++)
        a[i]=i;
}
//
int   getf(int v)
{
   return a[v]!=v?a[v] = getf(a[v]):a[v];
}
void   combine(int aa,int b)
{
  if(aa>b) a[getf(aa)] = getf(b);
    else a[getf(b)] = getf(aa);
    return ;
}
int main()
{
    int n,m;int x,y;
    while(~scanf("%d%d",&n,&m)){
    for(int i=0;i<=n;i++)
    {
        a[i]=i;
    }
    for(int j=0;j<m;j++)
    {
        scanf("%d%d",&x,&y);
        combine(x,y);
    }
    int sum = 0;
    for(int j=0;j<=n;j++)
    {
         if(getf(j)==a[0])
         {
             //cout<<j<<endl;
             sum++;
         }
    }
    cout<<sum<<endl;
    }
    return 0;
}
