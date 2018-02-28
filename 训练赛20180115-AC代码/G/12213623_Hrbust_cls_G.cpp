#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;

int v[20];
int w[20];
int dp[32200];

int main()
{
    int m,n;
    while(cin>>m>>n){
        memset(dp,0,sizeof(dp));
        int sum_v=0;
        int sum_w=0;
        for(int i=1;i<=n;i++){
            cin>>v[i]>>w[i];
            sum_v+=v[i];
            sum_w+=w[i];
        }
        if(m>=sum_v){
            cout<<sum_w<<endl;
            continue;
        }
        for(int i=1;i<=n;i++){
            for(int j=m;j>=v[i];j--){
                dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
            }
        }
        cout<<dp[m]<<endl;
    }
    return 0;
}
