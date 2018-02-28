#include<stdio.h>
int main()
{
    int x;
    while(~scanf("%d",&x))
    {
        int hh,mm;
        scanf("%d%d",&hh,&mm);
        int vis=0;
        for(;;)
        {
            if(mm%10==7||mm/10==7||hh%10==7||hh/10==7)
            {
                break;
            }
            else
            {
                if(mm-x<0)
                {
                    mm=mm-x+60;
                    if(hh-1<0)
                    {
                        hh=hh-1+24;
                    }
                    else{hh-=1;}
                }
                else
                {
                    mm-=x;
                }
                vis++;
            }
        }
        printf("%d\n",vis);
    }
}
