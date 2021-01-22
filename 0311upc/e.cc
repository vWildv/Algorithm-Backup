#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

char s[50];
long long dp[50][50],a[50];

long long  cal(int l,int r){
    long long ans=0;
    for(int i=l;i<=r;i++) ans=ans*10+a[i];
    return ans; 
}

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    scanf("%s",s);
    for(int i=1;i<=n;i++) a[i]=s[i-1]-'0';
    for(int i=1;i<=n;i++) dp[i][0]=cal(1,i);

    for(int i=2;i<=n;i++)
        for(int j=1;j<=min(i-1,k);j++)
            for(int k=j;k<i;k++) dp[i][j]=max(dp[i][j],dp[k][j-1]*cal(k+1,i));

    printf("%lld",dp[n][k]);
}