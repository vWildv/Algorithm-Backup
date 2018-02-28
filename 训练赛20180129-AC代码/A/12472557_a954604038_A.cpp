#include <stdio.h>

bool leap(int year)
{
    if( (year%400==0) || (year%4==0 && year%100!=0) )
        return true;
    return false;
}

int main()
{
    int y1;
    while(~scanf("%d", &y1)) {
        int ans = 0, i;
        for(i = y1 + 1; ; i ++) {
            if(leap(i)) {
                ans = ans + 2;
                ans = ans % 7;
            }
            else {
                ans = ans + 1;
                ans = ans % 7;
            }
            if(ans % 7 == 0) {
                if(leap(y1) && leap(i)) break;
                else if((!leap(y1)) && (!leap(i))) break;
            }
        }
        printf("%d\n", i);
    }
}