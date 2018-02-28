#include <string>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

const int N=105;
int map[N][N],w[N],v[N],vis[N],dp[N*N+5];

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
        int n,m;
		scanf("%d%d",&n,&m);
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++) map[i][j]=0x3f3f3f3f;
			map[i][i]=0;
		}
		for(int i=0;i<m;i++){
            int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			if(c<map[a][b]) map[a][b]=map[b][a]=c;
		}
		int wantV=0;
		for(int i=1;i<=n;i++){
			scanf("%d",&v[i]);
			wantV+=v[i];
		}
		wantV=wantV/2;
		for(int i=0;i<=n;i++) w[i]=map[0][i];
  		memset(vis,0,sizeof(vis));
        vis[0]=1;
  		int sum=0,sumv=0;
		for(int u=0;u<n;u++){
			int minW=1000,head=0;
			for(int i=1;i<=n;i++) 
                if(!vis[i] && minW>w[i]){
				    minW=w[i];
				    head=i;
			    }
			if(head==0) break;
			vis[head]=1; sum+=w[head]; sumv+=v[head];
			for(int i=1;i<=n;i++) 
                if(!vis[i]&&w[i]>w[head]+map[head][i]) w[i]=w[head]+map[head][i];
		}
		if(sumv<=wantV){
			printf("impossible\n");
			continue;
		}
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;i++){
			for(int j=sum;j>=w[i];j--) dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
		}
		int ans=0;
		for(int i=0;i<=sum;i++) 
            if(dp[i]>wantV){
                ans=i;
                break;
            }
		printf("%d\n",ans);
	}
	return 0;
}
