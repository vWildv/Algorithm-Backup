#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char map[2005][2005];
int main(){
	int n,m,k,num,temp,y;
	while(~scanf("%d%d%d",&n,&m,&k)){
		memset(map,'0',sizeof(map));
		num=0;
		for(int i=1;i<=n;i++){
			scanf("%s",map[i]+1);
		}
		for(int i=1;i<=n;i++){
			temp=0;
			for(int j=1;j<=m;j++){
				if(map[i][j]=='.'){
					if(j>m-k+1){
						continue;
					}
					else{
						y=j;
						while(map[i][y]=='.'&&y<=m){
							temp++;
							y++;
						}
						if(temp>=k){
							num+=temp-k+1;
						}
						temp=0;
						j=y;
					}
					
				}
			}
		}
		for(int j=1;j<=m;j++){
			temp=0;
			for(int i=1;i<=n;i++){
				if(map[i][j]=='.'){
					if(i>n-k+1){
						continue;
					}
					else{
						y=i;
						while(map[y][j]=='.'&&y<=n){
							temp++;
							y++;
						}
						if(temp>=k){
							num+=temp-k+1;
						}
						temp=0;
						i=y;
					}
					
				}
			}
		}
		if(k==1){
			printf("%d\n",num/2);
		}
		else{
			printf("%d\n",num);
		}
	}
	return 0;
}