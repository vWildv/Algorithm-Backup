#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<string>
using namespace std;
const int maxn=33000;
int dp[maxn];
int v[20],w[20];
int beibao01(int n,int m)//value size 物品个数 背包总容量
{
    for(int i=0;i<n;i++)
    {
        for(int j=m;j>=w[i];j--)
        {
            dp[j]=max(dp[j-w[i]]+v[i],dp[j]);
        }
    }
    return dp[m];

}
int main ()
{

    int n,m;//物品个数 背包最大容量
    while(cin>>m>>n)
    {

        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>w[i];
            cin>>v[i];
            sum+=w[i];
            ans+=v[i];
        }
        if(m>=sum)
        {
            cout<<ans<<endl;
        }
        else
        {

            cout<<beibao01(n,m)<<endl;
        }
         memset(dp,0,sizeof(dp));
    }
    return 0;
}
