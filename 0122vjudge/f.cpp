#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

const int maxn=10000;
int a[maxn];
int dp[maxn];
int n;

int LIS(){
    dp[1]=1;
    int ans=1;
    for(int i=2;i<=n;i++){
        int m=0;
        for(int j=1;j<i;j++){
            if(dp[j]>m&&a[j]<a[i])  
                m=dp[j];
        }
        dp[i]=m+1;
        if(dp[i]>ans) ans=dp[i];
    }
    return ans;
}

int main()  {
    while(~scanf("%d",&n)){
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        printf("%d\n",LIS());
    }
    return 0;
}
