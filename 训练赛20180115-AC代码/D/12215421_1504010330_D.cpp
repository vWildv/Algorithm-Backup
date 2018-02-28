#include<cstdio>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int f[55];
bool found(int n){
     int l=0,r=43;
     while(l<=r){
        int mid=(l+r)/2;
        if(n==f[mid]) return true;
        else if(n<f[mid]) r=mid-1;
        else l=mid+1;
     }
     return false;
}
int main ()
{
    f[0]=2;
    f[1]=3;
     for(int i=2;i<=43;i++){
        f[i]=f[i-1]+f[i-2];
     }
     //cout<<f[43];
     int n;
     while(scanf("%d",&n),n){
        if(found(n)) cout<<"Second win"<<endl;
        else cout<<"First win"<<endl;
     }
}
