#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int p[1005],v[1005];
void unit(int n){
     for(int i=1;i<=n;i++){
         p[i]=i;
     }
}
int getp(int i){
    int a;
    a=i;
    while(a!=p[a]){
        a=p[a];
    }
    p[i]=a;
    return a;
}
void unionp(int i,int j){
     int a=getp(i);
     int b=getp(j);
     if(a!=b){
        p[a]=b;
     }
}
int main ()
{
    int t,n,m,a,b;
    cin>>t;
    while(t--){
       cin>>n>>m;
       unit(n);
       memset(v,0,sizeof(v));
       for(int i=0;i<m;i++){
        cin>>a>>b;
        unionp(a,b);
       }

       for(int i=1;i<=n;i++){
            int k=getp(i);
           if(v[k]==0){
            v[k]=1;
           }
       }
       int ans=0;
       for(int i=1;i<=n;i++){
           if(v[i]==1) ans++;
       }
       cout<<ans<<endl;

    }
}
