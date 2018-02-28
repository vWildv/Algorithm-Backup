#include<bits/stdc++.h>
#define M(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long LL;
const int maxn = 10005;
int a[maxn];
int n;
bool dp[maxn];
bool dfs(int pos)
{
    int num = dp[pos]+dp[pos-1];
    if(pos==n) {
        return num==a[pos];
    }
    if(a[pos]-num>1||a[pos]-num<0||a[pos]<0||a[pos]>3) {
        return 0;
    }
    if(a[pos]-num)
        dp[pos+1] = 1;
    else
        dp[pos+1] = 0;
    return dfs(pos+1);
}
int main()
{
//    freopen("in.txt","r",stdin);
    while(cin>>n)
    {
        for (int i=1; i<=n; ++i) {
            scanf("%d",a+i);
        }
//        if(n==1) {
//            printf("%d\n",(a[1]==1||a[1]==0)?1:0);
//            continue;
//        }
        int ans = 0;
        if(a[1]==1) {
            dp[1] = 1; dp[2] = 0;
            if(dfs(2)) ++ans;
            dp[1] = 0; dp[2] = 1;
            if(dfs(2)) ++ans;
        }
        else if (a[1]==0) {
            dp[1] = dp[2] = 0;
            if(dfs(2)) ++ans;
        }
        else if (a[1]==2) {
            dp[1] = dp[2] = 1;
            if(dfs(2)) ++ans;
        }
        printf("%d\n",ans);
    }
    return 0;
}
