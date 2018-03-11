#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int a[100],dp[100005];

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    dp[0]=0;
    for(int i=1;dp[i]<=k;i++){
        dp[i]=0x3f3f3f3f;
        for(int j=0;j<n&&a[j]<=i;j++)
            dp[i]=min(dp[i-a[i]]+1,dp[i]);
    }
    printf("%d\n",)
}
