#include <string.h>
#include <algorithm>
using namespace std;

const int maxn=10000;
int a[maxn];
int dp[maxn];
int n;

int LIS(){
    dp[1]=1;
    int ans=0;
    for(int i=1;i<=n;i++){
        int m=-1;
        for(int j=0;j<i;j++){
            if(a[j]<a[i]) m=max(dp[j],m);
        }
        dp[i]=m+a[i];
        ans=*max_element(dp,dp+i+1);
    }
    return ans;
}

int main(){
    while(~scanf("%d",&n)&&n){
        memset(dp,0,sizeof(dp));
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        printf("%d\n",LIS());
    }
    return 0;
}
