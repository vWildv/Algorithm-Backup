#include<stdio.h>
#include<string.h>
int main()
{
    char Str[105];
    while(scanf("%s",&Str)!=EOF)
    {
        if(strstr(Str,"bkpstor"))
            printf("Warning\n");
        else
            printf("Safe\n");
    }
    return 0;
}