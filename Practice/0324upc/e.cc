#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

const int mod=1e9+7;
int dp[2][205][205][2];
char a[1005],b[205];

int main(){
    int n,m,k,flag=1;
    scanf("%d%d%d",&n,&m,&k);
    scanf("%s",a+1);
    getchar();
    scanf("%s",b+1);
    //printf("%s %s\n",a+1,b+1);
    for(int i=0;i<=1;i++) dp[i][0][0][0]=1;
    for(int i=1;i<=n;i++,flag=!flag)
        for(int j=1;j<=m;j++)
            for(int l=1;l<=k;l++){
                if(a[i]==b[j]){
                    dp[flag][j][l][0]=(dp[!flag][j][l][0]+dp[!flag][j][l][1])%mod;
                    dp[flag][j][l][1]=(dp[!flag][j-1][l-1][0]+(dp[!flag][j-1][l-1][1]+dp[!flag][j-1][l][1])%mod)%mod;
                }
                else{
                    dp[flag][j][l][0]=(dp[!flag][j][l][0]+dp[!flag][j][l][1])%mod;
                    dp[flag][j][l][1]=0;
                }
            }
    printf("%d\n",(dp[n%2][m][k][0]+dp[n%2][m][k][1])%mod);
}
