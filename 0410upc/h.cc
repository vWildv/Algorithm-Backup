#include <bits/stdc++.h>
using namespace std;

long long a[2005],dp[2005][2005];

int main(){
    long long n,x;
    scanf("%lld%lld",&n,&x);
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    for(int i=0;i<n;i++){
        dp[i][0]=a[i];
        for(int j=1;j<n;j++){
            int pos=i-j;
            dp[i][j]=min(dp[i][j-1],a[pos<0?n+pos:pos]);
        }
    }
    long long sum=0x3f3f3f3f3f3f;
    for(int i=0;i<n;i++){
        long long ans=0;
        for(int j=0;j<n;j++) ans+=dp[j][i];
        sum=min(sum,ans+i*x);
    }
    printf("%lld\n",sum);
}