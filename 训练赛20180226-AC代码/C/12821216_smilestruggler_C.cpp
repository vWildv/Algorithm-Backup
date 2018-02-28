#include<iostream>
#include<cstdio>
#include<cstring> 
using namespace std;
int l1[10005],l2[10005],n;
int check(){
	for(int i=2;i<=n;i++){
		l1[i+1]=l2[i]-l1[i]-l1[i-1];
	}
	if(l1[n+1]){
		return 0;
	}
	return 1;
}
int main(){
	while(~scanf("%d",&n)){
		int num=0;
		for(int i=1;i<=n;i++){
			scanf("%d",&l2[i]);
		}
		for(int i=0;i<=l2[1];i++){
			memset(l1,0,sizeof(l1));
			l1[1]=i;
			l1[2]=l2[1]-i;
			if(check()){
				num++;
			}
		}
		printf("%d\n",num);
	}
	return 0;
}