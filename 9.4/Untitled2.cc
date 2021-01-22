#include <bits/stdc++.h>
using namespace std;

int dp[205][205][30];
vector<pair<int,int> > g[205];

int f(int s,int t,int k){
    if(dp[s][t][k]>=0) return dp[s][t][k];
    for(int i=0;i<g[s].size();i++){
        if(g[s][i].second>=k){
            dp[s][t][k]=max(dp[s][t][k],f(t,g[s][i].first,g[s][i].second)^1);
        }
    }
    if(dp[s][t][k]==-1) dp[s][t][k]=0;
    return dp[s][t][k];
}

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            for(int k=0;k<30;k++) dp[i][j][k]=-1;
        }
    }
    while(m--){
        int x,y; char c[2];
        scanf("%d%d%s",&x,&y,c);
        //printf("-- %d %d %c\n",x,y,c[0]);
        g[x].push_back(make_pair(y,c[0]-'a'+1));
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            f(i,j,0);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%c",dp[i][j][0]?'A':'B');
        }
        printf("\n");
    }
}

