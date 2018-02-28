#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cstdlib>
using namespace std;
int x[1005];
int y[1005];

double cro(int i)
{
    return 1.0*(x[i]-x[i-1])*(y[i+1]-y[i])-1.0*(x[i+1]-x[i])*(y[i]-y[i-1]);
}

int main ()
{
   int n,x1,y1,x2,y2;
   cin>>n;
   int cnt=0;
   memset(x,0,sizeof(x));
   memset(y,0,sizeof(y));
   for (int i=0;i<=n;i++)
   {
        cin>>x[i]>>y[i];
   }
   for (int i=1;i<n;i++)
   {
        cnt+=(cro(i)>0);
   }
   cout<<cnt<<endl;
}
