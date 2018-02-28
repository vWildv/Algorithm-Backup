#include<stdio.h>

#include<string.h>

int main()
{
    char a[150];

    while(gets(a)!=NULL)
    {
        char b[8]="bkpstor";

        for(int i=0; i<strlen(a); i++)
        {
            if(a[i]=='b')
            {
                int k=0;

                int sum=0;

                for(int j=i; j<i+7; j++)
                {
                    if(a[j]==b[k])
                    {
                        sum++;
                        k++;
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                if(sum==7)
                {
                    printf("Warning\n");

                    break;
                }
            }
            if(i==strlen(a)-7)
            {
                printf("Safe\n");
                break;
            }
        }
    }
    return 0;
}
