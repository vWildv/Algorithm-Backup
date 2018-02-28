#include<iostream>
using namespace std;
int main()
{
	int n,m;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int sum1=0,sum2=0;
		for(int i=n-m+1;i<=n;i++)
		{
			int temp=i;
			while(temp%2==0)
			{
				temp=temp/2;
				sum1++;
			}
		}
		for(int i=2;i<=m;i++)
		{
			int temp=i;
			while(temp%2==0)
			{
				temp=temp/2;
				sum2++;
			}
		}
		cout<<sum1-sum2<<endl;
	}
}
