//111.CPP
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#define LL long long
using namespace std;
int main()
{
	int n,a,b;
	while(cin>>n>>a>>b)
	{int i;
		if(b>=0)
		{
			int j=0;
			for( i=a;j<b;j++)
			{
				i++;
				if(i>n)
				{
					i=1;
				}
			}
			cout<<i<<endl;
		}
		else{
			for( i=a;b<0;b++)
			{
				i--;
				if(i==0)
				{
					i=n;
				}
			}
			cout<<i<<endl;
		}
	}
}

