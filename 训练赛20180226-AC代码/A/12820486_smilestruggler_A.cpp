#include<iostream>
#include<cstdio>
using namespace std;
#define MOD 100003
long long pow1(long long x,long long y){
	if(y==0){
		return 1;
	}
	long long temp=pow1(x,y/2);
	temp*=temp;
	temp%=MOD;
	if(y&1){
		temp*=x;
		temp%=MOD;
	}
	return temp;
}
int main(){
	long long n,m,zong,rest,ans;
	while(~scanf("%lld%lld",&m,&n)){
		rest=pow1(m-1,n-1);
		zong=pow1(m,n);
		rest*=m;
		rest%=MOD;
		ans=zong-rest;
		if(ans<0){
			ans+=MOD;
		}
		printf("%lld\n",ans);
	}
	return 0;
} 