#include<iostream>
#include<cstdio>
#include<cstring>
//#include<cstdlib>
using namespace std;
int a[100010][13];
int main()
{
	int n;
	while(~scanf("%d",&n)&&n)
	{
        int x,t;
        memset(a,0,sizeof(a));
        int maxx=-1;
        for(int i=0;i<n;i++)
		{
			scanf("%d%d",&x,&t);
			a[t][x+1]++;
			maxx = max(maxx,t);
		}
		//system("pause");
		for(int i=maxx-1;i>=0;i--)
		{
			for(int j=1;j<=11;j++)
			{
				a[i][j]+=max(max(a[i+1][j],a[i+1][j+1]),a[i+1][j-1]);
			}
		}
		//system("pause");
		cout<<a[0][6]<<endl;
	}
}
