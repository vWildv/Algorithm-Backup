#include<stdio.h>
#include<string.h>
char map[10000];
int main()
{
    while(scanf("%s",map)!=EOF)
    {
        if(strstr(map,"bkpstor"))
        {
            printf("Warning");
        }
        else
        {
            printf("Safe");
        }
        printf("\n");
    }
    return 0;
}
