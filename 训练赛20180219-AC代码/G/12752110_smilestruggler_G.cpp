#include<iostream>
#include<cstdio>
#include<string.h>
#define MOD 1000000007
using namespace std;
int main(){
	int n,k;
	while(~scanf("%d%d",&n,&k)){
		int ans=0,res=0;
		for(int i=0;i<n;i++){
			res+=k;
			if(res%10>5){
				int temp=res*9;
				ans+=temp/10;
				res=0;
			}
		}
		int temp=res*9;
		int temp2=temp/10;
		if(temp%10>=5){
			temp2++;
		}
		ans+=temp2;
		printf("%d\n",ans);
	}
	return 0;
} 