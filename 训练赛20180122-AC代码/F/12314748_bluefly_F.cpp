#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int a[1000];
int dp[1000];
int main (){
    int n;
  while (~scanf("%d",&n)){
    for (int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    memset(dp,0,sizeof(dp));
    for (int i=2;i<=n;i++){
        for (int j=1;j<i;j++){
            if (a[i]>a[j] && dp[i]<=dp[j]+1){
                dp[i]=dp[j]+1;
            }
        }
    }
  int maxx=0;
    for (int i=1;i<=n;i++){
        maxx=max(maxx,dp[i]);
    }
    printf("%d\n",maxx+1);
  }

  return 0;
}
