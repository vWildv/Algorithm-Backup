#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;
int fa[1005];
int cnt;
int fath(int a)
{
    if (a!=fa[a])
    {
        fa[a]=fath(fa[a]);
    }
    return fa[a];
}
void he(int a,int b)
{
    int aa=fath(a);
    int bb=fath(b);
    if (aa!=bb)
    {
        fa[bb]=aa;
        cnt--;
    }
}
int main ()
{
    int t;cin>>t;
    while(t--)
    {
        memset(fa,0,sizeof(fa));
        int n,m;
        cin>>n>>m;
        for (int i=1;i<=n;i++)
        {
            fa[i]=i;
        }
        cnt=n;
        int a,b;
        for (int i=0;i<m;i++)
        {
            cin>>a>>b;
            he(a,b);
        }
        cout<<cnt<<endl;
    }
}
