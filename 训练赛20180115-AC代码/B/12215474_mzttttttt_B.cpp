#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
const int N = 50005;
int fa[N];
void init(int n)
{
    for(int i=0;i<n;i++)
        fa[i]=i; 
}

int Find(int u)
{
    if(fa[u]==u)
        return u;
    else return fa[u]=Find(fa[u]);
}

void unin(int u,int v)
{
    int a=Find(u);
    int b=Find(v);
    if(a<b)
        fa[b]=a;
    else
        fa[a]=b;
}
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        init(n);
        int a,b;
        for(int i=0;i<m;i++)
        {
            cin>>a>>b;
            unin(a,b);
        }
        int ans=0;
        int t=Find(0);
        for(int i=0;i<n;i++)
        {
            if(Find(i)==t)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}