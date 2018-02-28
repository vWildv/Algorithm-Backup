#include<iostream>
#include<cstdio> 
using namespace std;
int v[20],w[20],ans[20][32205];
int max(int a,int b){
	return a>b?a:b;
}
int main(){
	int m,n;
	while(~scanf("%d%d",&m,&n)){
		if(m>32200){
			m=32200;
		}
		for(int i=0;i<=n;i++){
			for(int j=0;j<=m;j++){
				ans[i][j]=0;
			}
		}
		for(int i=1;i<=n;i++){
			scanf("%d%d",&v[i],&w[i]);
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(j>=v[i]){
					ans[i][j]=max(ans[i-1][j-v[i]]+w[i],ans[i-1][j]);
				}
				else{
					ans[i][j]=ans[i-1][j];
				}
			}
		}
		printf("%d\n",ans[n][m]);		
	}
	return 0;
}
	