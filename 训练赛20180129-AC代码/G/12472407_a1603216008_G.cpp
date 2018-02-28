#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
#include<cstring>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        int m[1005];
        memset(m,0,sizeof(m));
        for(int i = 0;i < n;i ++){
            int t;
            scanf("%d",&t);
            m[t] ++;
        }
        int sum = 0;
        int ans = 0;
        for(int i = 0;i <= 1000;i ++){
            sum = 0;
            for(int j = 0;j <= 1000;j ++){
                if(m[j] > 0){
                    sum ++;
                    m[j] --;
                }
            }
            if(sum != 0){
                ans = ans + sum - 1;
            }
            else{
                break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
