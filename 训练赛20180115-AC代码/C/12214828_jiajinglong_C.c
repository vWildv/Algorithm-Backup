#include<stdio.h>
#include<string.h>
int main()
{
    char aa[105];
    while(gets(aa))
    {
        int i,len,flag;
        len=strlen(aa);
        flag=0;
        for(i=0;i<len;i++)
    {
        if(aa[i]=='b'&&aa[i+1]=='k'&&aa[i+2]=='p'&&aa[i+3]=='s'&&aa[i+4]=='t'&&aa[i+5]=='o'&&aa[i+6]=='r')
        {
            printf("Warning\n");
            flag=1;
            break;
        }
    }
       if(flag==0)
       {
           printf("Safe\n");
       }
    }
    return 0;
}
