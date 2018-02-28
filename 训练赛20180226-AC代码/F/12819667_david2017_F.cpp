#include <stdio.h>
#include <iostream>

using namespace std;

bool ok(int v) {
    int h, m;
    h = v/60;
    m = v%60;
    if ( h%10 == 7 ) return true;
    if ( m%10 == 7 ) return true;
    return false;
}

int main()
{
//    freopen("in.txt", "r", stdin);
    int x, h, m, y;
    while ( scanf("%d%d%d", &x, &h, &m) == 3 ) {
        y = 0;
        int hh = h*60 + m;
        while ( true ) {
            if ( ok(hh) ) {
                printf("%d\n", y);
                break;
            }
            y++;
            hh -= x;
            if ( hh < 0 ) hh += 1440;
        }
    }
    return 0;
}
