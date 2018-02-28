#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
#include<cstring>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;
int anss[100010];
int a[100010];
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m) != EOF){
        for(int i = 0;i < n;i ++){
            scanf("%d",&a[i]);
        }
        sort(a,a + n);
        int ans = 0;
        int t = 1;
        int index = 0;
        while(m >= t){
            if(t != a[index]){
                anss[ans] = t;
                ans ++;
                m = m - t;
            }
            else if(t == a[index]){
                index ++;
            }
            t ++;
        }
        printf("%d\n",ans);
        if(ans != 0){
            printf("%d",anss[0]);
            for(int i = 1;i < ans;i ++){
                printf(" %d",anss[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
