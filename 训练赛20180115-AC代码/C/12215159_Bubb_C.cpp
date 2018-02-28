#include<stdio.h>
#include<string.h>

int main()
{
    char Str[100]= {0},c[8]= {0};
    c[0]='b';
    c[1]='k';
    c[2]='p';
    c[3]='s';
    c[4]='t';
    c[5]='o';
    c[6]='r';
    int i,j,b;
    while(gets(Str))
    {
        int d=0,e=0,f=0;
        b=strlen(Str);
        for(i=0; i<b; i++)
        {
            if(Str[i]==c[0])
            {
                for(j=i; j<7+i; j++)
                    if(Str[j]!=c[d++])
                        break;
                if(j==7+i)
                {
                    printf("Warning\n");
                    e=1;
                    i=b;
                }
                else
                    d=0;
            }
        }
        if(e==0)
            printf("Safe\n");
    }
}

