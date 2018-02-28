#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int N,a[100050],dp[100050];
    while(~scanf("%d",&N)){
        for(int i=1;i<=N;i++){
            scanf("%d",&a[i]);
            dp[i]=1;
        }
        for(int i=1;i<=N;i++){
            for(int j=1;j<i;j++){
                if(a[i]>a[j]){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        printf("%d\n",*max_element(dp+1,dp+1+N));
    }
    return 0;
}
