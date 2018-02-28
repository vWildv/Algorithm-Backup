
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
#define inf 0x3f3f3f3f
#define Max(a,b) a>b?a:b
#define Min(a,b) a<b?a:b
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
	int n,k;
	while(cin>>n>>k)
	{
		int m=inf;
		for(int i=1;i<=n;i++)
		{
			double t=(n/i)*k*0.9;
			t+=0.5;
			//cout<<t<<endl;
			t=(int)t;
			t=t*i;
			//cout<<t<<endl;
            if(n%i!=0)
            {
                int s=n%i;
                double w=s*k*0.9;
                w+=0.5;
                w=int(w);
                t=t+w;
            }
            if(t<m)m=t;
		}
		cout<<m<<endl;
	}
}
