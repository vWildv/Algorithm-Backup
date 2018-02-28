#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int a[1005];
int dp[1005];
int main (){
  int n;
  while (~scanf("%d",&n)){
      memset(dp,0,sizeof(dp));
      memset(a,0,sizeof(a));
      if (n==0){
        break;
      }
      for (int i=1;i<=n;i++){
        scanf("%d",&a[i]);
      }
      
     for (int i=1;i<=n;i++){
        dp[i]=a[i];
     }
     
      for (int i=2;i<=n;i++){
         for (int j=1;j<i;j++){
              if (a[i]>a[j] && dp[i]<dp[j]+a[i]){
                dp[i]=dp[j]+a[i];
              }
         }
      }
        int maxx=0;
    for (int i=1;i<=n;i++){
        maxx=max(maxx,dp[i]);
    }
      printf("%d\n",maxx);

  }

  return 0;
}