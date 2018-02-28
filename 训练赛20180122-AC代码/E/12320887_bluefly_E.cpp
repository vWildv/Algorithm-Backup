#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int a[100001][12];
int dp[100001][12];
int main (){
  int n,l,r,mid,site,time;
  int maxx=0;
  while (~scanf("%d",&n)){
      maxx=0;
      memset(dp,0,sizeof(dp));
      memset(a,0,sizeof(a));
      if (n==0){
        break;
      }
     for (int i=0;i<n;i++){
        scanf("%d%d",&site,&time);
        a[time][site+1]++;
        maxx=max(maxx,time);
     }
    for (int i=1;i<=11;i++)
        dp[maxx][i]=a[maxx][i];
    for (int i=maxx-1;i>=0;i--){
        for (int j=1;j<=11;j++){
            l=dp[i+1][j-1]+a[i][j];
            mid=dp[i+1][j]+a[i][j];
            r=dp[i+1][j+1]+a[i][j];
            dp[i][j]=max(l,mid);
            dp[i][j]=max(dp[i][j],r);
        }
    }
    printf("%d\n",dp[0][6]);
  }
  return 0;
}