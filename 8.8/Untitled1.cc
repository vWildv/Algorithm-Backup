#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll f(ll x){
    ll tmp=0;
    while(x){
        tmp=tmp*10+x%10;
        x/=10;
    }
    return tmp;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        ll a,b;
        scanf("%lld%lld",&a,&b);
        printf("%lld\n",f(f(a)+f(b)));
    }
}
