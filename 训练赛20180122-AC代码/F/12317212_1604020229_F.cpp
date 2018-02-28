#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[100000];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int sum=0;
		int ans=0;
        while(sum!=n)
		{
			ans++;
			int maxx=1e5;
			for(int i=0;i<n;i++)
			{
				if(maxx>=a[i]&&a[i]!=0)
				{
					maxx=a[i];
					sum++;
					a[i]=0;
				}
			}
		}
         cout<<ans<<endl;
	}
}
