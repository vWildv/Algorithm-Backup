#include<stdio.h>

int main()
{
    char Str[105];
    while(gets(Str) != NULL)
    {
        int i;
        int first = 0;
        for(i = 0;Str[i] != '\0';i ++)
        {
            if(Str[i] == 'b' && Str[i+1] == 'k' && Str[i+2] == 'p')
            {
                if(Str[i+3] == 's' && Str[i+4] == 't' && Str[i+5] == 'o' && Str[i+6] == 'r')
                {
                    printf("Warning\n");
                    first = 1;
                    break;
                }
            }
        }
        if(first == 0)
        {
            printf("Safe\n");
        }
    }
    return 0;
}
