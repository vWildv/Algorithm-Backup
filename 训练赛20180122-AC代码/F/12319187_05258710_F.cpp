#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;
int dao[1000005];
int dp[1000005];
int main ()
{
    int n;
    while(cin>>n)
    {
        memset(dao,0,sizeof(dao));
        memset(dp,0,sizeof(dp));
        for (int i=0;i<n;i++)
        {
            cin>>dao[i];
            dp[i]++;
        }
        int maxx=0;
        for (int i=1;i<n;i++)
        {
            for (int j=i-1;j>=0;j--)
            {
                if (dao[i]>dao[j])
                {
                    dp[i]=max(dp[j]+1,dp[i]);
                }
            }
            if (dp[i]>maxx)maxx=dp[i];
        }
        cout<<maxx<<endl;
    }
}
