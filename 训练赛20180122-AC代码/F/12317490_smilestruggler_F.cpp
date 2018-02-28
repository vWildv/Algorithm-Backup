#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int a[1005];
int main(){
	int n,num,h;
	while(~scanf("%d",&n)){
		memset(a,0,sizeof(a));
		num=1;
		scanf("%d",&a[1]);
		for(int i=2,j;i<=n;i++){
			scanf("%d",&h);
			for(j=1;j<=num;j++){
				if(a[j]>=h){
					a[j]=h;
					break;
				}
			}
			if(j>num){
				a[++num]=h;
			}
		}
		printf("%d\n",num);
	}
	return 0;
}