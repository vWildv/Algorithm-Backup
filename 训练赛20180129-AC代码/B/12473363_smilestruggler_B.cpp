#include<iostream>
#include<cstdio>
using namespace std; 
int gcd(int a,int b){
    if (a%b == 0) {
        return b;
    }
    return gcd(b,a%b);
}
int main(){
	long long n,a,b,p,q,temp;
	long long ans;
	while(~scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q)){
		if(q<p){
			temp=q;
		}
		else{
			temp=p;
		}
		long long x=a*b/gcd(a,b);
		ans=n/a*p+n/b*q-n/x*temp;
		cout<<ans<<endl;
	}
	return 0;
}