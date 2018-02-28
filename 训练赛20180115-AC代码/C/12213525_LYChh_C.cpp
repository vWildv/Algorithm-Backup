#include <stdio.h>
#include <string.h>
int main()
{
    char a[105];
    while(~scanf("%s",a))
    {
        int n=strlen(a);
        int ma=0;
        for(int i=0;i<n-6;i++)
        {
            if(a[i]=='b'&&a[i+1]=='k'&a[i+2]=='p'&&a[i+3]=='s'&&a[i+4]=='t'&&a[i+5]=='o'&&a[i+6]=='r')
            {
                ma=1;
            }
        }
        if(ma==0)
        {
            printf("Safe\n");
        }
        else
        {
            printf("Warning\n");
        }
    }
    return 0;
}
