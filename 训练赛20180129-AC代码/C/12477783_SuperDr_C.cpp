#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a,b,c;
    int i,j,k;
    int s[1005];
    int *p;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
      //  memset(s,0,sizeof(s));
        p=s;
        j=1;
        if(c>0)
        {
           k=1;
           while(j<2*(a+c))
            {
                if(k==a+1)
                    k=1;
                s[j]=k;
                j++;
                k++;

            }
            printf("%d\n",*(p+b+c));
        }
        else if(c<0)
        {
            k=a;
            while(j<2*(a-c))
            {
                if(k==0)
                    k=a;
                s[j]=k;

                j++;
                k--;
            }
            printf("%d\n",s[1+(a-b)-c]);

        }
        else if(c==0)
            printf("%d\n",b);
    }
}
