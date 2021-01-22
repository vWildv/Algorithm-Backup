#include <bits/stdc++.h>
using namespace std;

int a[1005][7];
int dp[1005];

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=k;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[j][i]);
        }
    }
    map<int,int> cnt;
    for(int i=1;i<=n;i++){
        dp[a[i][1]]=1;
        cnt.clear();
        for(int j=1;j<=k;j++){
            for(int l=1;l<=n;l++){
                if(a[l][j]!=a[i][1]) cnt[a[l][j]]++;
                else break;
            }
        }
        //map<int,int>::iterator it;
        for(int m=1;m<=n;m++){
            if(cnt[m]==k){
                //printf("-- %d %d\n",a[i][1],m);
                dp[a[i][1]]=max(dp[a[i][1]],dp[m]+1);
            }
        }
    }
    printf("%d\n",*max_element(dp+1,dp+n+1));
}
