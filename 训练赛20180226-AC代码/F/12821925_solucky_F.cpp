#include<stdio.h>
#include<stdlib.h>
#include<iostream> 
#include<math.h>
using namespace std;

int main()
{
    int x;
    int hh,mm;
    int ans;
    scanf("%d",&x);
    scanf("%d%d",&hh,&mm);
    if(hh%10==7||mm%10==7)
        ans=0;
    else
    {
        ans=0;
        while(mm%10!=7&&hh%10!=7)
        {
           // if(mm==0)
             //   mm=60;
            mm=mm-x;
            ans++;
            if(mm<0)
            {
                mm=mm+60;
                hh=hh-1;
            }
            if(hh<0)
                hh=hh+24;
        }
    }
    printf("%d\n",ans);

    return 0;
}
