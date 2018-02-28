#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int pre[50005];
int join(int root){
	int son=root,temp;
	while(pre[root]!=root){
		root=pre[root];
	}
	while(son!=root){
		int temp=pre[son];
		pre[son]=root;
		son=temp;
	}
	return root;
} 
int main(){
	int n,m,x,y,num=0;
	while(~scanf("%d%d",&n,&m)){
		num=0;
		for(int i=0;i<n;i++){
			pre[i]=i;
		}
		for(int i=0;i<m;i++){
			scanf("%d%d",&x,&y);
			int x1=join(x);
			int y1=join(y);
			if(x1!=y1){
				pre[x1]=y1;
			}
		}
		int root=join(0);
		for(int i=0;i<n;i++){
			if(join(pre[i])==root){
				num++;
			}
		}
		printf("%d\n",num);
	}
	return 0;
}