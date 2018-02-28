#include<iostream>
using namespace std;
int fa[50006];
int finds(int i)
{
    if(i!=fa[i])
	{
		return fa[i]=finds(fa[i]);
	}
    else return i;
}
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
        for(int i=0;i<n;i++)
		{
			fa[i]=i;
		}
		for(int i=0;i<m;i++)
		{
			int from,to;
			cin>>from>>to;
			if(from>to) fa[finds(from)] = finds(to);
			else fa[finds(to)] = finds(from);
		}
		int ans=0;
//		for(int i=0;i<n;i++)
//		{
//			cout<<fa[i]<<endl;
//		}
		for(int i=0;i<n;i++)
		{
			if(finds(i)==fa[0]) ans++;
		}
		cout<<ans<<endl;
	}
}
