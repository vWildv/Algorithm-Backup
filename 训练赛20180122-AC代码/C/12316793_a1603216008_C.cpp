#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
#include<cstring>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;
int a[1005],sum[1005],ans;
int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        if(n == 0){break;}
        for(int i = 0;i < n;i ++){
            scanf("%d",&a[i]);
        }
        sum[0] = a[0];
        ans = 0;
        for(int i = 0;i < n;i ++){
            ans = 0;
            for(int j = 0;j < i;j ++){
                if(a[i] > a[j]){
                    ans = max(sum[j],ans);
                }
            }
            sum[i] = a[i] + ans;
        }
        ans = -1;
        for(int i = 0;i < n;i ++){
            ans = max(ans,sum[i]);
        }
        printf("%d\n",ans);
    }
   return 0;
}
