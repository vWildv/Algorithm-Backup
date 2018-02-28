#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[100005];
int main(){
	int n,x,sum;
	while(~scanf("%d%d",&n,&x)){
		sum=0;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		if(sum+n-1==x){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}