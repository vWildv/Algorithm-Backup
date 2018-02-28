#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int val[1005],dp[1005];

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        int key=0;
        int i,j;
        for(i=0;i<n;i++)
        {
            cin>>val[i];
        }
        memset(dp,0,sizeof(dp));
        dp[0]=val[0];
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(val[i]>val[j])
                {
                    dp[i]=max(dp[i],dp[j]+val[i]);
                }
            }
            dp[i]=max(dp[i],val[i]);
        }
        for(i=0;i<n;i++)
        {
            key=max(key,dp[i]);
        }
        cout<<key<<endl;
    }
}
