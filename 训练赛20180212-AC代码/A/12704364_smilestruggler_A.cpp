#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[200005];
int main(){
	int n,sum,i;
	while(~scanf("%d",&n)){
		for(i=0;i<n;i++){
			scanf("%d",&a[i]); 
		}
		for(i=0;i<n;i++){
			if(a[i]<0){
				break;
			}
			if(a[i]%2==1){
				a[i+1]--;
			}
		}
		if(i!=n){
			printf("NO\n");
		}
		else{
			if(a[n-1]%2==0){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}
	return 0;
}