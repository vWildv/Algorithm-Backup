#include<iostream>
#include<cstring>
using namespace std;
int f[33000];
int c[20];
int w[20];
int main()
{
     int m,n;
     while(cin>>m>>n)
	 {
	 	int sum1 = 0,sum2 = 0;
	 	memset(f,0,sizeof(f));
	 	for(int i=1;i<=n;i++)
		{
           cin>>c[i]>>w[i];
           sum2+=c[i];
           sum1+=w[i];
		}
	 	if(m>=sum2)
		{
           cout<<sum1<<endl;
           continue;
		}
		for (int i = 1; i <= n; i++)
        for (int v = m; v >= c[i]; v--)
            f[v] = max(f[v], f[v - c[i]] + w[i]);
         cout<<f[m]<<endl;
	 }
}
