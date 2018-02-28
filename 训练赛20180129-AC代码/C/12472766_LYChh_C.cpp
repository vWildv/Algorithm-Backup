#include <stdio.h>
int main()
{
    int n,a,b;
    while(~scanf("%d%d%d",&n,&a,&b))
    {
        if(b>0)
        {
            int ma=(a+b)%n;
            if(ma==0)
            {
                ma=n;
            }
            printf("%d\n",ma);
        }
        else
        {
            b=(-b)%n;
            if(b==0)
            {
                b=n;
            }
            if(a>b)
            {
                printf("%d\n",a-b);
            }
            else
            {
                printf("%d\n",n-b+a);
            }
        }
    }
}
