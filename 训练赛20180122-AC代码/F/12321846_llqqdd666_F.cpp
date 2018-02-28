#include <stdio.h>
#include <string.h>
int a;
int b[666666];
int main()
{
    int n,m;
    while(scanf("%d",&n)!=EOF)
    {
        memset(b,0,sizeof(b));
        m=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            int j;
            for(j=0;j<=m;j++)
            {
                if(b[j]>=a)
                {
                    b[j]=a;
                    break;
                }
            }
            if(j>m)
            {
                b[++m]=a;
            }
        }
        printf("%d\n",m);
    }
    return 0;
}

