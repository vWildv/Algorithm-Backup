#include <stdio.h>

int main()
{
    int n, s[10005];
    while(~scanf("%d", &n)) {
        int j = 0;
        while(n --) {
            int h;
            scanf("%d", &h);
            int i;
            for(i = 0; i < j; i ++)
                if(s[i] >= h) {
                    s[i] = h;
                    break;
                }
            if(i == j)
                s[j ++] = h;
        }
        printf("%d\n", j);
    }
    return 0;
}
