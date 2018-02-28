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
        int t,ans,sum = 0;
        scanf("%d",&t);
        ans = t;
        sum ++;
        for(int i = 1;i < n;i ++){
            scanf("%d",&t);
            if(t == ans){sum ++;}
            else if(sum == 0){
                ans = t;
            }
            else if(sum > 0){
                sum --;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
