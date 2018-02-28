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
int main()
{
	int n,m;
	while(cin>>n>>m)
	{   
		if(n==0&&m==0)cout<<"NO"<<endl;
		else if(abs(n-m)<=1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}