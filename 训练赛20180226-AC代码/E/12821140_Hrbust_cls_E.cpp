#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 100010;
const LL INF = 1e18;

LL a[MAXN],b[MAXN],c[MAXN];

int main()
{
    ios_base::sync_with_stdio(false);
    int T,n,m,q;
    cin>>T;
    while(T--){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            cin>>a[i]>>b[i];
            c[i]=a[i]*b[i];
        }
        LL mi=c[n+1]=b[0]=INF;
        for(int i=n;i>=1;i--){
            mi=min(mi,c[i]);
            c[i]=mi;
        }
        for(int i=1;i<=m;i++){
            cin>>q;
            int p=lower_bound(a+1,a+1+n,q)-a;
            if(a[p]==q) cout<<min(b[p]*q,c[p+1])<<endl;
            else cout<<min(b[p-1]*q,c[p])<<endl;
        }
    }
    return 0;
}
