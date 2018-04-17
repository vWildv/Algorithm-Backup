#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll Min(ll a,ll b,ll c){
    ll mini=b<c?b:c;
    return mini<a?mini:a;
}

ll f(ll a,ll b,ll c){
    ll res=a*a+b*b+c*c+Min(a,b,c)*7;
    return res;
}

ll Max(ll a,ll b){
    return a>b?a:b;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        ll a,b,c,d,ans=0;
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
         for(int i=0;i<=d&&i<1e3;i++){
            for(int j=0;i+j<=d&&j<1e3;j++){
                int k=d-i-j;
                ans=Max(ans,f(a+i,b+j,c+k));
                ans=Max(ans,f(a+i,b+k,c+j));
                ans=Max(ans,f(a+k,b+i,c+j));
            }
        }
        ans=Max(ans,f(a+d,b,c));
        ans=Max(ans,f(a,b+d,c));
        ans=Max(ans,f(a,b,c+d));
        printf("%lld\n",ans);
    }
}