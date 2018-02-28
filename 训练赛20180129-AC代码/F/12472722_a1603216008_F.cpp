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
    double n;
    while(scanf("%lf",&n) != EOF){
        for(int i = 0;i <= n;i ++){
            int tx,ty;
            scanf("%d",&tx);
            scanf("%d",&ty);
        }
        double ans = n / 2 - 2;
        printf("%.0f\n",ans);
    }
    return 0;
}
