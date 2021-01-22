#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n,m;
    scanf("%lld%lld",&n,&m);
    if(n>m) swap(n,m);
    if(n==1){
        ll res=6*(m/6)+2*max((m%6)-3,0LL);
        printf("%lld\n",res);
    }
    else if(n==2){
        if(m==2) printf("%d\n",0);
        else if(m==3) printf("%d\n",4);
        else if(m==7) printf("%d\n",12);
        else printf("%lld\n",2LL*m);
    }
    else if(n%2==0||m%2==0){
        ll res=n*m;
        printf("%lld\n",res);
    }
    else{
        ll res=n*m-1LL;
        printf("%lld\n",res);
    }
}
