#include<iostream>
#include<cstdio>
#include<string.h>
#define MOD 1000000007
using namespace std;
int a[1050],vis[1050];
int main(){
	int l,h,s,n,m,sum,num,t;
	char cmd[5];
	scanf("%d",&t);
	while(t--){
		sum=0,num=0;
		memset(a,0,sizeof(a));
		memset(vis,0,sizeof(vis));
		scanf("%d%d",&n,&m);	
		for(int i=0;i<m;i++){
			scanf("%d%d:%d%s",&n,&h,&s,cmd);
			if(!vis[n]&&cmd[0]!='A'){
				a[n]+=20;
			}
			if(!vis[n]&&cmd[0]=='A'){
				int temp=h*60+s;
				a[n]+=temp;
				vis[n]=1;
			}
		}
		for(int i=1000;i<=1013;i++){
			if(vis[i]){
				num++;
				sum+=a[i];
			}
		}
		printf("%d %d\n",num,sum);
	}
	return 0;
} 