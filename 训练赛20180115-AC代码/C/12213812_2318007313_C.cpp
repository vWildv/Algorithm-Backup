#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    char s[500];
    char bi[8] = "bkpstor";
    while(gets(s) != NULL)
    {
        int len = strlen(s);
        int j = 0;
        int flag = 0;
        for(int i=0; i<len ; i++)
        {
            if(s[i] == bi[j])
            {
                j++;
                if(j == 7)
                {
                    flag = 1;
                    break;
                }
                continue;
            }
            j = 0;
            flag = 0;
        }
        if(flag == 1)
        {
            printf("Warning\n");
        }
        else
        {
            printf("Safe\n");
        }
    }
    return 0;
}
