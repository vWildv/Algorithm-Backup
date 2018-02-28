#include<stdio.h>
#include<string.h>
int main(){
    char a[105];
    char b[10]="bkpstor";
    memset(a,0,sizeof(a));
    while(gets(a)!=NULL)
    {
        int j=-1;
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]=='b')
            {
                int tmp=0;
                for(int j=i+1;j<strlen(b)+i;j++)
                {
                    if(a[j]==b[j-i])
                    {
                        tmp++;
                    }
                }
                if(tmp==6)j=1;
            }
        }
        if(j==1)printf("Warning\n");
        else printf("Safe\n");
        memset(a,0,sizeof(a));
    }
}
