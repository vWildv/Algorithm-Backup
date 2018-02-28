#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],test[7]="bkpstor";
    while(~scanf("%s",str))
    {
        int len=strlen(str);
        if(len<7)
        {
            printf("Safe\n");
            continue;
        }
        int i,j;
        for(i=0;i<len-6;i++)
        {
            for(j=0;j<7;j++)
            {
                if(str[j+i]!=test[j])
                    break;
            }
            if(j==7)
                break;
        }
        if(i==len-6)
            printf("Safe\n");
        else
            printf("Warning\n");
    }
}
