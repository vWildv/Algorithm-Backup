#include <stdio.h>


int main()
{
    int r,g,t;
    while(~scanf("%d%d",&r,&g))
    {if(r<g){
    t=r;
    r=g;
    g=t;
    }
        if( (r-g)>=2 || r==0&&g==0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }

}
