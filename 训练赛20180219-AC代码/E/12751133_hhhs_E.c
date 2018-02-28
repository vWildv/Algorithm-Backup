#include<stdio.h>
int main()
{
    int r,g;
    while(~scanf("%d%d",&r,&g))
    {
        if(r+1==g||g+1==r||(r==g&&r!=0&&g!=0))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}