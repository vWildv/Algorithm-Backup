#include <stdio.h>
#include <string.h>
int main()
{
    char arr[110]={0};
    while(~scanf("%s",&arr))
    {
        int n = strlen(arr);
        int i,j=0;
        for(i = 0;i < n; i++)
        {
            if(arr[i]=='b'&&arr[i+1]=='k'&&arr[i+2]=='p'&&arr[i+3]=='s'&&arr[i+4]=='t'&&arr[i+5]=='o'&&arr[i+6]=='r')
                j++;
        }
        if(j!=0)
            printf("Warning\n");
        else
            printf("Safe\n");
    }

}
