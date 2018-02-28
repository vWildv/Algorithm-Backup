#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int N;
    int a[1005];
    int dp[1005];
    while(cin>>N){
        if(N==0) break;
        for(int i=1;i<=N;i++){
            cin>>a[i];
            dp[i]=a[i];
        }
        for(int i=2;i<=N;i++){
            for(int j=1;j<i;j++){
                if(a[i]>a[j])
                   dp[i]=max(dp[i],dp[j]+a[i]);
            }
        }
        cout<<*max_element(dp+1,dp+1+N)<<endl;
    }
    return 0;
}
