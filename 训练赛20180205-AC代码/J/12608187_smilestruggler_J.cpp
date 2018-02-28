#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int guan[105][105],zi[105];
int main(){
	int n,m,a,b,flag,j;
	while(~scanf("%d%d",&n,&m)&&(n+m)){
		flag=0;
		memset(guan,0,sizeof(guan));
		memset(zi,0,sizeof(zi));
		for(int i=0;i<m;i++){
			scanf("%d%d",&a,&b);
			if(!guan[a][b]){
				guan[a][b]=1;
				zi[b]++;
			}
		}
		for(int i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(!zi[j]){
					break;
				} 
			}
			if(j==n){
				flag=1;
				break;
			}
			zi[j]--;
			for(int k=0;k<n;k++){
				if(guan[j][k]){
					zi[k]--;
				}
			}
		}
		if(flag){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
} 