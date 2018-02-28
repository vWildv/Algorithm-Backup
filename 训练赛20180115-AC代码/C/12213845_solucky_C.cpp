#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char Str[106];

    //for(int i=0;i<7;i++)
    while(scanf("%s",Str)!=EOF)
    {
        //int len;
        //len=strlen(aa);
        if(strstr(Str,"bkpstor"))
            printf("Warning\n");
        else
            printf("Safe\n");

    }
    
    return 0;
}
