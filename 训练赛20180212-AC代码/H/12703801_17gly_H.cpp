//111.cpp
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int n,m;
	//ios:sync_with_stdio(false);
	while(cin>>n>>m)
	{

		int ans=0,t;
		int i;
		for( i=1;i<=n;i++)
		{
			cin>>t;
			ans+=86400-t;
			if(ans>=m)
			{
				break;
			}
		}
		for(int j=i;j<=n;j++)
		{
			cin>>t;
		}
		cout<<i<<endl;
	}
}
