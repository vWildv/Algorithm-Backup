//111.cpp
#include <iostream>
#include <cstdio>
#include <cstring>
#define LL long long 
using namespace std;
LL a[10000];
bool judge(LL j)
{
    LL t=0;
    while(j)
    {
    	t+=j%10;
    	j/=10;
    }
    if(t==10)
    	return true;
    return false;
}
void  Print()
{
	int cnt=1;
	for(LL i=19;cnt<=10005;i++)
	{
          if(judge(i))
          {
          	 a[cnt++]=i;
          }
	}
}
int main()
{
	int n;
	Print();
	while(cin>>n)
	{
		cout<<a[n]<<endl;
	}
}
