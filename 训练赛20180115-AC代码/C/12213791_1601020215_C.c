#include<stdio.h>
#include<string.h>
char a[10000];
int main()
{
    while(scanf("%s",&a)!=EOF)
    {
        if(strstr(a,"bkpstor"))
        {
            printf("Warning");
        }
        else
        {
            printf("Safe");
        }
        printf("\n");
    }

}

