#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

long long num[100005],cnt[2][100005],tmp;
long long sum[2][3][100005];

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)scanf("%lld",&num[i]);
    long long ans=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&tmp);
        ans=(ans+sum[i%2][0][tmp]%10007+sum[i%2][1][tmp]*i%10007+num[i]*sum[i%2][2][tmp]%10007+cnt[i%2][tmp]*num[i]*i%10007)%10007;
        sum[i%2][0][tmp]=(sum[i%2][0][tmp]+num[i]*i)%10007;
        sum[i%2][1][tmp]=(sum[i%2][1][tmp]+num[i])%10007;
        sum[i%2][2][tmp]=(sum[i%2][2][tmp]+i)%10007;
        cnt[i%2][tmp]++;
    }
    printf("%lld",ans%10007);
}