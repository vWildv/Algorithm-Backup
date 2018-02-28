#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 200010;

int a[MAXN];
int vis[MAXN];

int main()
{
    //ios::sync_with_stdio(false);
    int n;
    while(~scanf("%d",&n)){
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        LL maxpow=0;
        sort(a+1,a+n+1);
        for(int i=1;i<=n;i++){
            if(vis[a[i]]) continue;
            LL tmp=0;
            //cout<<a[i]<<endl;
            for(int j=a[i];;j+=a[i]){
                vis[j]=1;
                int l=lower_bound(a+1,a+n+1,j)-a;
                int r=lower_bound(a+1,a+n+1,j+a[i])-a;
                //cout<<j<<' '<<l<<' '<<r<<endl;
                tmp+=(LL)(r-l)*j;
                if(r>n) break;
            }
            //cout<<tmp<<endl;
            maxpow=max(maxpow,tmp);
        }
        printf("%I64d\n",maxpow);
    }
    return 0;
}
