#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 100010;

int to[MAXN];
int vis[MAXN];

int vn;

void dfs(int st)
{
    if(vis[st]) return;
    vis[st]=1;
    vn++;
    dfs(to[st]);
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    while(cin>>n){
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=n;i++)
            cin>>to[i];
        int m1st=0;
        int m2nd=0;
        LL sum=0;
        for(int i=1;i<=n;i++){
            vn=0;
            if(!vis[i]) dfs(i);
            sum+=(LL)vn*vn;
            if(vn>m1st) m2nd=m1st,m1st=vn;
            else if(vn>m2nd) m2nd=vn;
        }
        if(m2nd==0) cout<<sum<<endl;
        else cout<<sum+2LL*m1st*m2nd<<endl;
    }
    return 0;
}
