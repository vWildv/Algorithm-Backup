#include <stdio.h>

int main()
{
    int x, h, m, hh, mm;
    scanf("%d", &x);
    scanf("%d%d", &h, &m); hh = h, mm = m;
    for(int i = 0; i <= 24*60; i ++) {
        int tmp = x * i;
        h = hh, m = mm;
        while(m < tmp) {
            m += 60;
            h --;
            if(h == -1) h = 23;
        }
        m -= tmp;
        if(m%10 == 7 || m/10 == 7 || h%10 == 7 || h/10 == 7) {
            printf("%d\n", i);
            return 0;
        }
    }
}
