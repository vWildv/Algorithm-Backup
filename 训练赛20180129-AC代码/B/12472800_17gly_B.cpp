//111.CPP
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#define LL long long
using namespace std;
LL gcd(LL a,LL b)
{
	return b==0?a:gcd(b,a%b);
}
int main()
{
	LL n,a,b,p,q;
	while(cin>>n>>a>>b>>p>>q)
	{
		LL sum=0;
		LL t = a*b/gcd(a,b);
		sum+=n/a*p;
		sum+=n/b*q;
		sum-=min(p,q)*(n/t);
		cout<<sum<<endl;
	}
}
