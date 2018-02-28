#include<stdio.h>
int main()
{
    int r,g;
    while(scanf("%d%d",&r,&g)!=EOF)
    {
        if(g-r>=2||r-g>=2||(r==0&&g==0))
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}