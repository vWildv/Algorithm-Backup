#include <bits/stdc++.h>
using namespace std;

const int mod=1e7+7;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        printf("%lld\n",(n*n)%mod);
    }
}
