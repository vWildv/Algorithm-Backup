#include <stdio.h>
int a[90000];
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        int ma=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++)
        {
            ma++;
            m-=(86400-a[i]);
            if(m<=0)
            {
                break;
            }
        }
        printf("%d\n",ma);
    }
    return 0;
}