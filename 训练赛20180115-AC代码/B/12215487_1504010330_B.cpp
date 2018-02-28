#include<cstdio>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int parent[50005];
int getp(int i){
    int a=i;
    while(a!=parent[a]){
        a=parent[a];
    }
    parent[i]=a;
    return a;
}
void unionp(int u,int v){
     int i=getp(u);
     int j=getp(v);
     if(i!=j){
        parent[i]=j;
     }
}
int main ()
{
    int n,m,u,v;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        parent[i]=i;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        unionp(u,v);
    }
    int p=getp(0),ans=1;
    for(int i=1;i<n;i++)
    {
         if(getp(i)==p) ans++;
    }
   cout<<ans<<endl;
}
