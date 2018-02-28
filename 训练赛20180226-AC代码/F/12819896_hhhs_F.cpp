#include<stdio.h>
int main()
{
    int n,h,m,ans;
    while(~scanf("%d",&n))
    {
        ans=0;
        scanf("%2d%2d",&h,&m);
        if(m%10==7||h%10==7)
            printf("0\n");
        else
        {
            while(m%10!=7&&h%10!=7)
            {
                m-=n;
                ans++;
                if(m<0)
                {
                    m+=60;
                    h--;
                    if(h<0)
                        h+=24;
                }
            }
            printf("%d\n",ans);
        }
    }
}