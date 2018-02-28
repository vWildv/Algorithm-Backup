#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<queue>
#include<map>
#define LL long long
using namespace std;
const int MAXN = 100010;
const int INF = 0x3f3f3f3f;

int a[MAXN];
int pre[MAXN];
int suf[MAXN];

int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}

int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        pre[1]=a[1];
        for(int i=2;i<=n;i++){
            pre[i]=gcd(pre[i-1],a[i]);
        }
        suf[n]=a[n];
        for(int i=n-1;i>=1;i--){
            suf[i]=gcd(suf[i+1],a[i]);
        }
        int ans=max(pre[n-1],suf[2]);
        for(int i=2;i<=n-1;i++){
            ans=max(ans,gcd(pre[i-1],suf[i+1]));
        }
        cout<<ans<<endl;
    }
    return 0;
}

