#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[1000];
    while(scanf("%s",s)!=EOF)
    {
        if(strstr(s,"bkpstor"))
        {
            printf("Warning\n");
        }
        else
        {
            printf("Safe\n");
        }
    }
}
