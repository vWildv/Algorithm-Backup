#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;

int fa[50050];

int Find(int x)
{
    if(fa[x]<0)
        return x;
    else
        return fa[x]=Find(fa[x]);
}

void Union(int r1,int r2)
{
    if(r1<r2){
        fa[r1]+=fa[r2];
        fa[r2]=r1;
    }
    else{
        fa[r2]+=fa[r1];
        fa[r1]=r2;
    }
}

int main()
{
    int N,M;
    cin>>N>>M;
    int u,v;
    memset(fa,-1,sizeof(fa));
    for(int i=1;i<=M;i++){
        cin>>u>>v;
        int rt1=Find(u);
        int rt2=Find(v);
        if(rt1!=rt2)
            Union(rt1,rt2);
    }
    cout<<-fa[0]<<endl;
    return 0;
}