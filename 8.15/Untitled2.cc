#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod=1000000007;

ll qpow(ll a,ll p){
    ll ans=1;
    a=a%mod;
    while(p){
        if(p&1) ans=(ans*a)%mod;
        a=(a*a)%mod;
        p>>=1;
    }
    return ans%mod;
}

ll modsqr(ll a,ll n){
    ll b,k,i,x;
    if(qpow(a,(n-1)/2)==1){
        if(n%4==3){
            x=qpow(a,(n+1)/4);
        }
        else{
            for(b=1;qpow(b,(n-1)/2)==1;b++);
            i=(n-1)/2;
            k=0;
            do{
                i/=2;
                k/=2;
                if((qpow(a,i)*qpow(b,k)+1)%n==0) k+=(n-1)/2;
            }while(i%2==0);
            x=(qpow(a,(i+1)/2)*qpow(b,k/2))%n;
        }
        if(x*2>n) x=n-x;
        return x;
    }
    return -1;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        ll b,c;
        scanf("%lld%lld",&b,&c);
        if(b*b-4*c==0){
            printf("%lld %lld\n",(b)*qpow(2,mod-2)%mod,(b)*qpow(2,mod-2)%mod);
            continue;
        }
        ll delta=modsqr(((mod+b)*(mod+b)-4*c)%mod,mod);
        if(delta==-1){
            printf("-1 -1\n");
        }
        else{
            if(b-delta<0)
                printf("%lld %lld\n",min((mod+b-delta)*qpow(2,mod-2)%mod,(mod+b+delta)*qpow(2,mod-2)%mod),max((mod+b-delta)*qpow(2,mod-2)%mod,(mod+b+delta)*qpow(2,mod-2)%mod));
            else
                printf("%lld %lld\n",min((b-delta)*qpow(2,mod-2)%mod,(b+delta)*qpow(2,mod-2)%mod),max((b-delta)*qpow(2,mod-2)%mod,(b+delta)*qpow(2,mod-2)%mod));
        }
    }
}
