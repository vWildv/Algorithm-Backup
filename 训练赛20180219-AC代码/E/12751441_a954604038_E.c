#include <stdio.h>

int main()
{
    int r, g;
    while(~scanf("%d%d", &r, &g)) {
        if((r == g || r == g + 1 || r == g - 1) && (r != 0 || g != 0)) printf("YES\n");
        else printf("NO\n");
    }
}
