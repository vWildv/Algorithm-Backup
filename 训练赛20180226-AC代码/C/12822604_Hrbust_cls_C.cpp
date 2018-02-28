#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 10010;
const int INF = 0x3f3f3f3f;
const double eps = 1e-9;
int a[MAXN],b[MAXN],c[MAXN];
int n;

int judge(int flag)
{
    memcpy(c,b,sizeof(b));
    a[1]=flag;
    c[1]-=a[1],c[2]-=a[1];
    for(int i=2;i<=n;i++){
        a[i]=c[i-1]?1:0;
        c[i-1]-=a[i];
        if(c[i-1]!=0) return 0;
        c[i]-=a[i];
        c[i+1]-=a[i];
    }
    if(c[n]!=0) return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>b[i];
    cout<<judge(0)+judge(1)<<endl;
    return 0;
}
