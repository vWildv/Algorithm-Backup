#include <bits/stdc++.h>
using namespace std;
int vv[20],val[20];
int dp[40000];

int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m)){
        memset(dp,0,sizeof(dp));
        memset(vv,0,sizeof(vv));
        memset(val,0,sizeof(val));
        int sumv=0,suma=0;;
        for(int i=0;i<m;i++){
            scanf("%d%d",&vv[i],&val[i]);
            sumv+=vv[i];
            suma+=val[i];
        }
        if(sumv<n){
            printf("%d\n",suma);
            continue;
        }
        for(int i=0;i<m;i++){
            for(int j=n;j>=vv[i];j--){
                dp[j]=max(dp[j],dp[j-vv[i]]+val[i]);
            }
        }
        printf("%d\n",dp[n]);
    }
    return 0;
}
