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
const int P = 1e9+7;

int qpow(int i,int k)
{
    int ans = 1;
    for(; k ; k>>=1){
        if(k&1) ans = (LL)ans*i%P;
        i=(LL)i*i%P;
    }
    return ans;
}

int f(int n,int k)
{
    int ans = 0;
    for(int i=1;i<=n;i++)
        ans = (ans + qpow(i,k))%P;
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n>>k;
        cout<<f(n,k)<<endl;
    }
    return 0;
}
