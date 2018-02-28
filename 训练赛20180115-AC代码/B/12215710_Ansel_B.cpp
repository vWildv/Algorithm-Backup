#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int a[50005];
int xz(int x)
{
    return (a[x]!=x)?a[x]=xz(a[x]):a[x];
}
void zheng(int c,int b)
{
    if(c>b)
        a[xz(c)]=xz(b);
    else
        a[xz(b)]=xz(c);
    return;
}

int main()
{
    int c,b,m,n;
    int ans = 0;
    while(~scanf("%d%d",&n,&m))
    {
        for(int i=0; i<n; ++i)
            a[i]=i;
        while(m--)
        {
            scanf("%d%d",&c,&b);
            zheng(c,b);
        }
        for(int i=0; i<n; i++)
            if(xz(i)==a[0])
                ans++;
        printf("%d\n",ans);
    }
}

