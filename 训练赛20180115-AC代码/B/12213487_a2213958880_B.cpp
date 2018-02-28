#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
#define maxn 50050
int fa[maxn];
void init(int n)
{
    for(int i=0; i<n; i++)
        fa[i]=i;
    return;
}
int find(int k)
{
    int x=k;
    while(k!=fa[k])k=fa[k];
    int temp;
    while(fa[x]!=k)
    {
        temp=fa[x];
        fa[x]=k;
        x=temp;
    }
    return k;
}
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        init(n);
        int a,b;
        int ra,rb;
        while(m--)
        {
            scanf("%d%d",&a,&b);
            ra=find(a);
            rb=find(b);
            fa[rb]=ra;
        }
        int ans=0;
        int root=find(0);
        for(int i=0; i<n; i++)
        {
            if(find(i)==root)ans++;
        }
        printf("%d\n",ans);
    }

}
