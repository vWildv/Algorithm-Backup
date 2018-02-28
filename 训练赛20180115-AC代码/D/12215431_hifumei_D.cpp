#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[50];
int main()
{
    a[1]=2LL;
    a[2]=3LL;
    for(int i=3;i<=50;i++){
        a[i]=a[i-1]+a[i-2];
    }
    ll n;
    while(~scanf("%lld",&n),n){
        bool ok=true;
        for(int i=1;i<=50&&ok&&a[i]<=n;i++){
            if(n==a[i]) ok=false;
        }
        if(!ok)puts("Second win");
        else puts("First win");
    }
    return 0;
}
