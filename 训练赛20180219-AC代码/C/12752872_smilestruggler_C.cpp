#include<iostream>
#include<cstdio>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
	int t,n,ans,x;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int cnt=1;
		for(int i=0;i<n-1;i++){
			scanf("%d",&x);
			if(cnt==0){
				cnt++;
			}
			else{
				if(x==1){
					cnt--;
				}
				else{
					cnt++;
				}
			}
		}
		if(n%2){
			printf("No\n");
		}
		else{
			if(cnt!=0){
				printf("No\n");
			}
			else{
				printf("Yes\n");
			}
		}
	}
	return 0;
} 