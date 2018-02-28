#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n&&n)
	{
		int b=2,a=3,s;
		bool flag = false;
		while(b<=n)
		{
			if(a==n||b==n)
			{
				cout<<"Second win"<<endl;
				flag = true;
				break;
			}
            s=a+b;
            b=a;
            a=s;
		}
		if(flag == false)
			cout<<"First win"<<endl;
	}
}
