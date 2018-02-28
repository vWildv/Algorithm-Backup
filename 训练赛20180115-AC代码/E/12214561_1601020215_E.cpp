
#include<iostream>
using namespace std;
int C(int m,int n)
{
	int i,sum1=0,sum2=0,j;
	for(i=m,j=n;j>0;i--,j--)
	{
		int a=i;
		int b=j;
		while(a%2==0)
		{
			sum1++;
			a/=2;
		}
		while(b%2==0)
		{
			sum2++;
			b/=2;
		}
	}	
		return sum1-sum2;
	
}
		

int main()
{
	int T,m,n;
	cin>>T;
	while(T--)
	{
		cin>>m>>n;
		cout<<C(m,n)<<endl;
	}
	return 0;
}