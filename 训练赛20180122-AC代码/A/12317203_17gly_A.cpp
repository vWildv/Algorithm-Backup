#include <iostream>
#include<cstdio>
#include<cstring>
using namespace  std;
int a[1005];
int vis[1005];
int Find(int x)
{
    if(a[x]==x)
    {
        return x;
    }
    else{
        a[x]=Find(a[x]);
        return a[x];
    }
}
void combine(int x,int y)
{
	int t1=Find(x);
	int t2=Find(y);
	if(t1!=t2)
	{
		a[t1]=t2;
	}
}
int main(int argc, char const *argv[])
{
	int n;cin>>n;
	while(n--)
	{
		memset(vis,0,sizeof(vis));
		int s,b;
		cin>>s>>b;int x,y;
		for(int i=1;i<=s;i++)
		{
			a[i]=i;
		}
		for(int i=0;i<b;i++)
		{
            cin>>x>>y;
            combine(x,y);
		}
		int cnt=0;
		for(int i=1;i<=s;i++)
		{
            if(!vis[Find(a[i])])
            {
            	vis[Find(a[i])]++;
            	cnt++;
            }
		}
		cout<<cnt<<endl;
	}
	return 0;
}
