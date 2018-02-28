//111.cpp
#include <iostream>
#include <cstdio>
#include <cstring>
#define LL long long 
using namespace std;
int main()
{
	int n,x;
	while(cin>>n>>x)
	{
		int ans=0,t;
		for(int i=0;i<n;i++)
		{
			cin>>t;
			ans+=t;
		}
		if(ans+n==x+1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
