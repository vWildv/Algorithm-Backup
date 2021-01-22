#include <bits/stdc++.h>
using namespace std;

int a[100005];
long long s1[100005],s2[100005];

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        s1[i]=s1[i-1]+a[i];
        s2[i]=s2[i-1]+max(0,a[i]);
    }
    long long ans=-1;
    for(int i=0;i+k<=n;i++){
        long long sum1=s1[i+k]-s1[i];
        long long sum2=s2[n]-s2[i+k]+s2[i];
        ans=max(ans,sum2+max(0ll,sum1));
    }
    printf("%lld\n",ans);
}
