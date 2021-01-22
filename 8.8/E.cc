#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N=400005

ll m1,m2;
ll x[N],y[N],a[3],b[3],c[3];
unordered_map<ll,int> sum;


int main(){
    int n;
    scanf("%d",&n);
    scanf("%lld%lld%lld%lld%lld",&x[1],&x[2],&a[1],&b[1],&c[1],&m1);
    scanf("%lld%lld%lld%lld%lld",&y[1],&y[2],&a[2],&b[2],&c[2],&m2);
    for(int i=3;i<=n;i++){
        x[i]=((a[1]*x[i-1])%m1+(b[1]*x[i-2])%m1+c[1])%m1;
        y[i]=((a[2]*y[i-1])%m2+(b[2]*y[i-2])%m2+c[2])%m2;

    }
}

