#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int pre[1005];
int t[1005];
int find(int x){
	int r=x;
	while(r!=pre[r]){
		r=pre[r];
	}
	int i=x,j;
	while(r!=pre[i]){
		j=pre[i];
		pre[i]=r;
		i=j;
	}
	return r;
}
void join(int x,int y){
	int fx=find(x),fy=find(y);
	if(fx!=fy){
		pre[fx]=fy;
	}
}
int main(){
	int l,n,m,a,b,num;
	scanf("%d",&l);
	while(l--){
		num=0;
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n;i++){
			pre[i]=i;
		}
		for(int i=1;i<=m;i++){
			scanf("%d%d",&a,&b);
			join(a,b);
		}
		memset(t,0,sizeof(t));
		for(int i=1;i<=n;i++){
			t[find(i)]=1;
		}
		for(int i=1;i<=n;i++){
			if(t[i]){
				num++;
			}
		}
		printf("%d\n",num);
	}
	return 0;
} 