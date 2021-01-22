#include <bits/stdc++.h>
using namespace std;

string a;
const int mod=1e9+7;

long long qpow(long long a,int p){
    long long ans=1;
    while(p){
        if(p&1) ans=(ans*a)%mod;
        a=(a*a)%mod;
        p>>=1;
    }
    return ans;
}

int main(){
    cin>>a;
    int cnt=0; long long res=0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='a'){
            cnt++;
        }
        else res=(res+(qpow(2ll,cnt)-1+mod)%mod)%mod;
    }
    printf("%lld\n",res);
}
