#include <stdio.h>
#include <string.h>
int a[1000000];
int main()
{
    int n, m, d;
    while(~scanf("%d", &n)) {
        memset(a, 0, sizeof(a));
        for(int i = 1 ; i <= n; i ++) {
            scanf("%d", &m);
            a[m] ++;
            if(a[m] >= (1 + n) / 2)
                d = m;
        }
        printf("%d\n", d);
        }
    return 0;
}
