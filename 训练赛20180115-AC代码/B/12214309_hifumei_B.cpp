#include <bits/stdc++.h>
using namespace std;

int fa[50005];

int fid(int x)
{
    return fa[x]==x?x:fa[x]=fid(fa[x]);
}

void merge(int a,int b)
{
    int t1=fid(a);
    int t2=fid(b);
    if(t1!=t2){
        fa[t2]=t1;
    }
}
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m)){
        for(int i=0;i<50005;i++){
            fa[i]=i;
        }
        int t1,t2;
        for(int i=0;i<m;i++){
            scanf("%d%d",&t1,&t2);
            merge(t1,t2);
        }
        int cnt=1;
        int qw=fid(0);
        for(int i=1;i<n;i++){
            if(fid(i)==qw)cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
