#include <bits/stdc++.h>
using namespace std;

int getp(int n){
    //int p=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return i;
    }
    return n;
}

int getphi(int n){
    if(n==1) return 1;
    int p=getp(n);
    if(n%(p*p)==0){
        return getphi(n/p)*p;
    }
    else{
        return getphi(n/p)*(p-1);
    }
}

int main(){
    int n;
    while(scanf("%d",&n)&&n){
        int ans=n-1-getphi(n);
        printf("%d\n",ans);
    }
}
