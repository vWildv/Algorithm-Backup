#include <bits/stdc++.h>
using namespace std;

long long c[2005][2005],ans[2005][2005],f[2005];

int main(){
    long long t,k;
    scanf("%lld%lld",&t,&k);
    c[0][0]=1;
    for(int i=1;i<=2000;i++){
        c[i][0]=1;
        for(int j=1;j<=i;j++){
            c[i][j]=(c[i-1][j-1]%k+c[i-1][j]%k)%k;
            if(!c[i][j]) f[i]++;
            ans[i][j]=i==j?ans[i-1][j-1]+f[i]:ans[i-1][j]+f[i];
        }
    }
    while(t--){
        long long n,m;
        scanf("%lld%lld",&n,&m);
        printf("%lld\n",ans[n][min(n,m)]);
    }
}
