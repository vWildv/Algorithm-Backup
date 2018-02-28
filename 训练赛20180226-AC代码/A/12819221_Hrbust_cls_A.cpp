#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 100010;
const int INF = 0x3f3f3f3f;
const int p = 100003;
const double eps = 1e-9;

LL qpow(LL a,LL b)
{
    LL ans = 1;
    for(;b;b>>=1){
        if(b&1) ans=ans*a%p;
        a=a*a%p;
    }
    return ans;
}

LL m,n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>m>>n;
    cout<<(qpow(m,n)-m*qpow(m-1,n-1)%p+p)%p<<endl;
    return 0;
}
