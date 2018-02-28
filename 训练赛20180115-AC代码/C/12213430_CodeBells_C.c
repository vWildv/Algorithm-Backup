#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    char ill[]={"bkpstor"};
    int i,j,flag;
    while(gets(str))
    {

        for(i=0;i<strlen(str);i++)
        {
            flag=1;
            for(j=0;j<strlen(ill);j++)
            {
                if(str[i+j]!=ill[j]) flag=0;
            }
            if(flag==1) break;

        }
        if(flag==1)printf("Warning\n");
            else printf("Safe\n");
    }
}
