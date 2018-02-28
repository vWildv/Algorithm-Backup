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
int vis[1015];
int plen[15];
int main()
{
	    int t;cin>>t;
		for(int i=0;i<t;i++)
		{
			int n,m;cin>>n>>m;
			string s; int h;string b;
			int res=0;int cnt=0;
			mem(vis,0);
			mem(plen,0);
			for(int j=0;j<m;j++)
			{
               cin>>h>>s>>b;
               if(b=="AC"&&!vis[h])
               {
               	  res+=(s[1]-'0')*60+(s[3]-'0')*10+(s[4]-'0')+plen[h];
               	  vis[h]=1;
                  cnt++;
               }
               else if(vis[h])continue;
               else if(b!="AC")plen[h]+=20;
            }
			cout<<cnt<<" "<<res<<endl;
		}
}
