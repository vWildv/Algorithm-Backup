#include <bits/stdc++.h>
using namespace std;

char a[105];
int dp[105][205][55][2];

int main(){
    scanf("%s",a+1);
    int n=strlen(a+1);
    int m;
    scanf("%d",&m);
    dp[0][101][0][0]=1;
    dp[0][101][0][1]=1;
    for(int i=0;i<=n;i++){
        for(int j=-i;j<=i;j++){
            j+=101;
            for(int k=0;k<=m;k++){
                for(int l=0;l+k<=m;l++){
                    if(a[i+1]=='F'){
                        if(l&1){
                            dp[i+1][j][k+l][0]|=dp[i][j][k][1];
                            dp[i+1][j][k+l][1]|=dp[i][j][k][0];
                        }
                        else{
                            dp[i+1][j+1][k+l][0]|=dp[i][j][k][0];
                            dp[i+1][j-1][k+l][1]|=dp[i][j][k][1];
                        }
                    }
                    else{
                        if(l&1){
                            dp[i+1][j+1][k+l][0]|=dp[i][j][k][0];
                            dp[i+1][j-1][k+l][1]|=dp[i][j][k][1];
                        }
                        else{
                            dp[i+1][j][k+l][0]|=dp[i][j][k][1];
                            dp[i+1][j][k+l][1]|=dp[i][j][k][0];
                        }
                    }
                }
            }
            j-=101;
        }
    }
    int res=0;
    for(int i=-n;i<=n;i++){
        if(dp[n][i+101][m][0]||dp[n][i+101][m][1]){
            res=abs(i);
        }
    }
    printf("%d\n",res);
}
