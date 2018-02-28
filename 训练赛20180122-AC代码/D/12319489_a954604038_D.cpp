#include <stdio.h>
#include <cstring>
int ans;
int N;
int num[999999];
void input() {
    int x;
    for(int i = 1; i <= N; i ++) {
        scanf("%d", &x);
        num[x] ++;
        if(num[x] >= (N + 1) / 2){
                ans = x;
        }
    }
}

int main()
{
    while(~scanf("%d", &N)) {
        memset(num, 0, sizeof(0));
        input();
        printf("%d\n", ans);
    }
}
