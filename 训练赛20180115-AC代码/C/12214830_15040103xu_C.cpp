#include<stdio.h>
#include<string.h>
int main()
{
    char virus[]="bkpstor";
    char str[100];
    while(~scanf("%s", str))
    {
        int i, j;
        int len = strlen(str);
        for(i=0; i<len; i++)
        {
            if(i+6>=len)
            {
                printf("Safe\n");
                break;
            }
            for(j=0; j<7; j++)
            {
                if(str[i+j]!=virus[j])
                    break;
            }
            if(j==7)
            {
                printf("Warning\n");
                break;
            }
        }
    }
    return 0;
}
