#include<stdio.h>
#include<string.h>
int main()
{
    char a[1005];
    while(gets(a))
    {
        int n = strlen(a);
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='b'&&a[i+1]=='k'&&a[i+2]=='p'&&a[i+3]=='s'&&a[i+4]=='t'&&a[i+5]=='o'&&a[i+6]=='r')
                sum++;
            else
                continue;
        }
        if(sum!=0)
            printf("Warning\n");
        else if(sum==0)
            printf("Safe\n");
    }
    return 0;
}
