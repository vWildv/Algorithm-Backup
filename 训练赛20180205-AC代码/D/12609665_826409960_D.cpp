#include<bits/stdc++.h>
#define M(a,b) memset(a,b,sizeof(a))
using namespace std;
const int maxn = 200005;
const int mod = 10007;
int Next[maxn];
char s[maxn];
int sum[maxn];
int n;
void makeNext(const char P[])
{
    int q,k;
    Next[0] = 0;
    for (q=1,k=0; q<n; ++q) {
        while(k>0&&P[q]!=P[k]) {
            k = Next[k-1];
        }
        if(P[q]==P[k])
            k++;
        Next[q] = k;
    }
}
int main()
{
    int t;cin>>t;
    while(t--) {
        scanf("%d%s",&n,s);
        int ans = 0;
        makeNext(s);
        for (int i=0; i<n; ++i) {
            if(Next[i]) {
                sum[i] = sum[Next[i-1]]+1;
            }
            else sum[i] = 1;
            ans = (ans+sum[i])%mod;
        }
        printf("%d\n",ans);
    }
    return 0;
}
