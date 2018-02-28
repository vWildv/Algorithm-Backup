#include<bits/stdc++.h>
using namespace std;
#define M 100003ll
long long m,n,ans;
long long  ksm(long long x,long long y)
{
	long long re=1;
	while(y)
	{
		if(y&1)re*=x,re%=M;
		x*=x,x%=M;
		y>>=1;
	}
	return re;
}
int main()
{
	cin>>m>>n;
	m%=M;
	ans=ksm(m,n);
	ans-=m*ksm(m-1,n-1);
	ans%=M,ans+=M,ans%=M;
	cout<<ans<<endl;
}
