#include<stdio.h>
int main()
{
    int r,g;
    while(~scanf("%d%d",&r,&g))
    {
        if(r == 0 && g == 0)
            printf("NO\n");
        if(r != g)
        {
            if(r - g == 1 || g - r == 1)
            printf("YES\n");
        else
        printf("NO\n");
        }
            if(r == g && r !=0 && g != 0)
            printf("YES\n");
    }
}
