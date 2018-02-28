#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <string>
#include <queue>
#define LL long long
#define MAXN 200005
#define Max(a,b) a>b?a:b
#define Min(a,b) a<b?a:b
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
LL mo=1000000007;
LL GETpow(LL n ,LL k)
{
	LL ans=1;
   for(int i=0;i<k;i++)
   {
      ans=(ans*n)%mo;
   }
   return ans;
}
int main()
{
    ios::sync_with_stdio(false);
	int t;cin>>t;
	while(t--)
	{
		LL e,z;
		cin>>e>>z;LL res=0;
		for(int i=1;i<=e;i++)
		{
          res+=GETpow(i,z);
          if(res>mo)res%=mo;
		}
		cout<<res<<endl;
	}
}
