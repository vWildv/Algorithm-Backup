#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N=100005;
int a[N],b[N];
ll dp1[N],dp2[N];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++) scanf("%d",&b[i]);
    priority_queue<ll> q1,q2;
    q1.push((ll)a[1]); q2.push((ll)b[1]);
    dp1[1]=(ll)a[1]; dp2[1]=(ll)b[1];
    for(int i=2;i<=n;i++){
        dp1[i]=q2.top()+(ll)a[i];
        dp2[i]=q1.top()+(ll)b[i];
        q1.push(dp1[i]);
        q2.push(dp2[i]);
    }
    long long ans=0;
    for(int i=1;i<=n;i++){
        ans=max(ans,max(dp1[i],dp2[i]));
    }
    printf("%lld\n",ans);
}

