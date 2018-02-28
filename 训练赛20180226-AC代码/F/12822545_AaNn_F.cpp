#include<stdio.h>
int main()
{
    int h,m,x;
    while(~scanf("%d%d%d",&x,&h,&m))
    {
        int mark=1,t=0;
        while(mark!=0)
        {
            if(m%10==7||h%10==7)
                mark=0;
            m=m-x;
            t++;
            if(m<0)
            {
                h=h-1;
                m+=60;
            }
            if(h<0)
                h=23;
        }
        printf("%d\n",t-1);
    }
}
