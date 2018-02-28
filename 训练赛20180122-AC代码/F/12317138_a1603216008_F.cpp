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
    int n,m;
    while(scanf("%d",&n) != EOF)
    {
        int a[1005];
        memset(a,0,sizeof(a));
        a[0] = 30000;
        int t = 1,j;
        for(int i = 0;i < n;i ++){
            scanf("%d",&m);
            for(j = 0;j <= t;j ++){
                if(m <= a[j]){
                    a[j] = m;
                    break;
                }
            }
            if(j > t){
                t ++;
                a[t] = m;
            }
        }
        printf("%d\n",t);
    }
   return 0;
}
