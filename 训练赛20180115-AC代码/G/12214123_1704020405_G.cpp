#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int m,n;
    int val[40240];
    while(cin >> m >> n)
    {  int Max = 0,num = 0,num1 = 0;
        int i,j;
        memset(val,0,sizeof(val));
        int v[17],w[17];
        for(i = 1;i <= n;i ++)
             {cin >> v[i] >> w[i];num += v[i];num1 += w[i];}
      if(num <= m){cout<<num1<<endl;continue;}
        for(i = 1;i <= n;i ++)
        {
            for(j = m;j >= v[i];j --)
                {val[j] = max(val[j],val[j - v[i]] + w[i]);Max = max(val[j],Max);}
        }
     cout<<Max<<endl;
    }
}
