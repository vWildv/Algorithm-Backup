#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int adc[20][34000];
struct box
{
    int cost;
    int value;
}num[20];
int main()
{
    int i, j, n, m;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        int sum = 0, sum2 = 0;
        memset(adc, 0, sizeof(adc));
        for(i = 1;i <= n; i ++) {
            scanf("%d %d", &num[i].cost, &num[i].value);
            sum = sum + num[i].cost;
            sum2 = sum2 + num[i].value;
        }
        if(sum < m) {
            printf("%d\n",sum2);
            continue;
        }
        for(i = num[1].cost;i <= m; i ++) {
            adc[1][i]=num[1].value;
        }
        for(i = 2; i <= n ; i ++) {
            for(j = 1; j <= m; j ++) {
                if(j >= num[i].cost) {
                    adc[i][j] = max(adc[i-1][j], adc[i-1][j-num[i].cost] + num[i].value);
                }
                else
                    adc[i][j]=adc[i-1][j]; }
        }
        printf("%d\n", adc[n][m]);
    }
    return 0;
}