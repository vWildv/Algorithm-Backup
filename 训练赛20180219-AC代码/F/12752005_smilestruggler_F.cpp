#include<iostream>
#include<cstdio>
#include<string.h>
#define MOD 1000000007
using namespace std;
int main(){
	int n,p,q,ans;
	while(~scanf("%d%d%d",&n,&p,&q)){
		ans=0;
		int temp=q+p;
		int rest=temp%4;
		if(rest){
			if(rest>2){
				ans+=temp/4;
				ans++;
				ans+=n/2;
				if(n%2){
					ans++;
				}
				printf("%d\n",ans);
			}
			else{
				ans+=temp/4;
				ans++;
				ans+=n/2;
				if(rest==2&&(p==0||q==0)&&n%2){
					ans++;
				}
				printf("%d\n",ans);
			}
		}
		else{
			ans+=temp/4;
			ans+=n/2;
			if(n%2){
				ans++;
			}
			printf("%d\n",ans);
		}
	}
	return 0;
} 