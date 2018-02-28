#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 200010;

int fa[MAXN];

int fnd(int x)
{
    return fa[x]<0?x:fa[x]=fnd(fa[x]);
}

void uon(int r1,int r2)
{
    fa[r1]<fa[r2]?(fa[r1]+=fa[r2],fa[r2]=r1):(fa[r2]+=fa[r1],fa[r1]=r2);
}

int col[MAXN];
int cnt[MAXN];

int main()
{
    ios::sync_with_stdio(false);
    int n,m,k;
    while(cin>>n>>m>>k){
        memset(fa,-1,sizeof(fa));
        for(int i=1;i<=n;i++)
            cin>>col[i];
        int l,r;
        for(int i=1;i<=m;i++){
            cin>>l>>r;
            int rl=fnd(l);
            int rr=fnd(r);
            if(rl!=rr) uon(rl,rr);
        }
        vector<vector<int> >v(n+1);
        for(int i=1;i<=n;i++)
            v[fnd(i)].push_back(i);
        int ans=0;
        for(int i=1;i<=n;i++){
            int sz=v[i].size();
            if(sz==0) continue;
            for(int j=0;j<sz;j++)
                cnt[col[v[i][j]]]++;
            int maxcol=0;
            for(int j=0;j<sz;j++){
                maxcol=max(maxcol,cnt[col[v[i][j]]]);
                cnt[col[v[i][j]]]=0;
            }
            ans+=sz-maxcol;
        }
        cout<<ans<<endl;
    }
    return 0;
}
