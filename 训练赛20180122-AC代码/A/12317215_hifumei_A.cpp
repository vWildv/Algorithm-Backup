#include <bits/stdc++.h>
using namespace std;

int fa [1005];

int find(int x)
{
    return fa[x]==x?x:fa[x]=find(fa[x]);
}
void merge(int x,int y)
{
    int t1=find(x);
    int t2=find(y);
    if(t1!=t2){
        fa[t2]=t1;
    }
    return ;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){

        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=0;i<=n;i++){fa[i]=i;}
        for(int i=0,t1,t2;i<m;i++){
            scanf("%d%d",&t1,&t2);
            merge(t1,t2);
        }
        int sum=0;
        for(int i=1;i<=n;i++){
            if(fa[i]==i)sum++;
        }
        printf("%d\n",sum);
    }
    
    return 0;
}
