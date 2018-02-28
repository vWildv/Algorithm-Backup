#include<stdio.h>
#include<stdlib.h>
#include<map>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<string.h>
using namespace std;
int fa[50005];
int a[1000000];
int find(int x)
{
    return fa[x]!=x?fa[x] = find(fa[x]):fa[x];
}

void unin(int a,int b)
{
    if(a>b) fa[find(a)] = find(b);
    else fa[find(b)] = find(a);
    return;
}
map<int,int>q;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        q.clear();
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=1; i<=n; i++)
        {
           fa[i]=i;
        }
        for(int i=0; i<m*2; i++)
        {
           scanf("%d",&a[i]);
        }
        for(int i=0;i<2*m;i=i+2){
            unin(a[i],a[i+1]);
        }
        for(int i=0;i<2*m;i=i+2){
            unin(a[i],a[i+1]);
        }
        int num=0;
        /*for(int i=1; i<=n; i++)
        {
            printf("%d ",fa[i]);
        }
        printf("\n");*/
        for(int i=1; i<=n; i++)
        {
            if(q[fa[i]]==0)
            {
                num++;
                q[fa[i]]=1;
            }
        }
        printf("%d\n",num);
    }
}
