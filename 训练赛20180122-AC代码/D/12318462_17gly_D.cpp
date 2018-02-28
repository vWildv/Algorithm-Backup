
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<string.h>
#include<math.h>
using namespace std;
int vis[1000000];
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		memset(vis,0,sizeof(vis));
		int t;int ans=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&t);
			vis[t]++;
			if(vis[t]>=((n+1)/2))
			{
				ans=t;
			}
		}
		cout<<ans<<endl;

	}
}
