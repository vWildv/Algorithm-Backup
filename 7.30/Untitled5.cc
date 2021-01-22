#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e5+5;
const ll mod=998244353;
ll a[N];

ll pw10[N];

int f(ll a) {
	int pos=0;
	ll res=0;
	while (a > 0) {
		ll cur=a%10;
		a/=10;
		//printf("~ %lld\n",cur*pw10[2*pos]);
		res=(res+(cur*pw10[2*pos])%mod)%mod;
		res=(res+(cur*pw10[2*pos+1])%mod)%mod;
		++pos;
	}
	//printf("-- %lld\n",res);
	return res%mod;

}

int main(){
    int n;
    scanf("%d",&n);
    pw10[0]=1;
    for(int i=1;i<=21;i++) pw10[i]=(pw10[i-1]*10)%mod;
    ll sum=0;
    for(int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        sum=(sum+f(a[i]))%mod;
    }
    printf("%lld\n",(sum*n)%mod);
}
