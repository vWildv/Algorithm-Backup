#include<iostream>
#include<cstdio>
#define MOD 1000000007
using namespace std;
int main(){
	int l,r,t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		long long sum=0,temp;
		scanf("%d%d",&n,&k);
		for(int i=1;i<=n;i++){
			temp=1;
			for(int j=1;j<=k;j++){
				temp*=i;
				if(temp>MOD){
					temp%=MOD;
				}
			}
			sum+=temp;
			if(sum>MOD){
				sum%=MOD;
			}
		}
		printf("%d\n",sum);
		
	}
	return 0;
} 