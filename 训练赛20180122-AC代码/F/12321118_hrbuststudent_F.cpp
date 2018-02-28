#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int a[10000];
int dp[10000];
int main()
{
    int n;
    while(cin >> n)
    {
        for(int i = 1; i <= n; i ++)
            cin >> a[i];
        dp[1] = 1;
        for(int i = 2; i <= n; i++)
        {
            int maxn = 0;
            for(int j = 1; j < i; j++)
            {
                if(a[j] <= a[i])
                    maxn = max(maxn,dp[j]);
            }
            dp[i] = maxn+1;
        }
        int ans = 0;
        for(int i = 1; i <= n; i++)
            ans = max(ans,dp[i]);
        cout << ans <<endl;
    }
}
