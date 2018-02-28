#include<stdio.h>
#include <string.h>
int main()
{
    int t;
    while(~scanf("%d",&t))
    {
        int a,b[100],flag=0;
        memset(b,0,sizeof(b));
        for(int i=0; i<t; i++)
        {
            scanf("%d",&a);
            int j;
            for(j=0; j<=flag; j++)
            {
                if(b[j]>=a)
                {
                    b[j]=a;
                    break;
                }
            }
            if(j>flag)
            {
                b[++flag]=a;
            }
        }
        printf("%d\n",flag);
    }
    return 0;
}
