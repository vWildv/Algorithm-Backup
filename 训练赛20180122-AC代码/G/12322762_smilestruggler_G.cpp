#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char map[10][10];
int book[10],mark,k,n,ans;
void dfs(int h){
	if(mark==k){
		ans++;
		return;
	}
	if(h>n){
		return;
	}
	for(int i=1;i<=n;i++){
		if(book[i]==0&&map[h][i]=='#'){
			book[i]=1;
			mark++;
			dfs(h+1);
			book[i]=0;
			mark--;
		}
	}
	dfs(h+1);
}
int main(){
	while(~scanf("%d%d",&n,&k)&&n!=-1&&k!=-1){
		ans=0,mark=0;
		memset(book,0,sizeof(book));
		for(int i=1;i<=n;i++){
			scanf("%s",map[i]+1);
		}
		dfs(1);
		printf("%d\n",ans);
	}
	return 0;
} 