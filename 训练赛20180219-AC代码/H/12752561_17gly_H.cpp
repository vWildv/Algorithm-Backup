
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <string>
#include <queue>
#define LL long long
#define inf 0x3f3f3f3f
#define Max(a,b) a>b?a:b
#define Min(a,b) a<b?a:b
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
bool judge(LL k)
{
	for(LL i=2;i*i<=k;i++)
	{
		if(k%i==0) return false ;
	}
	return true;
}
int main()
{
	LL n;
	while(cin>>n)
	{
		if(n==6)cout<<"2 2 2"<<endl;
		else if(n%2==0)
		{
			cout<<2<<" ";
			n=n-2;
			LL j=n/2;
			LL i=n-j;
			for(;;i++,j--)
			{
				if(judge(i)&&judge(j))
				{
					cout<<j<<" "<<i<<endl;
					break;
				}
			}
		}
		else if(n%2==1)
		{
			cout<<3<<" ";
			n=n-3;
			LL j=n/2;
			LL i=n-j;
			for(;;i++,j--)
			{
				if(judge(i)&&judge(j))
				{
					cout<<j<<" "<<i<<endl;
					break;
				}
			}
		}
	}
}
