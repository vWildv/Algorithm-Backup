#include <stdio.h>
#include <string.h>
int a[1000000];
int main()
{
    int n, m, tmp;
    while(~scanf("%d", &n)) {
        memset(a, 0, sizeof(a));
        for(int i = 1 ; i <= n; i ++) {
            scanf("%d", &m);
            a[m] ++;
            if(a[m] >= (1 + n) / 2)
                tmp = m;
        }
        printf("%d\n", tmp);
        }
    return 0;
}
