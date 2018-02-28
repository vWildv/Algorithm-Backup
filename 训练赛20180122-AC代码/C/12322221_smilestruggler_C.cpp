#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int a[1005],dp[1005];
int main(){
	int n,max1;;
	while(~scanf("%d",&n)&&n){
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		max1=a[0];
		dp[0]=a[0];
		for(int i=1;i<n;i++){
			dp[i]=a[i];
			for(int j=0;j<i;j++){
				if(a[i]>a[j]){
					dp[i]=max(dp[i],dp[j]+a[i]);
						
				}
			}
			if(dp[i]>max1){
				max1=dp[i];
			}
		}
		printf("%d\n",max1);
	}
	return 0;
}