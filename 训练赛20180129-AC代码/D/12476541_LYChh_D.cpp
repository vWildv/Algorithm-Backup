#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
struct papa
{
    char s[105];
    int x;
    int y;
} a[100005];
int cmp(papa x,papa y)
{
    if(x.x==y.x)
    {
        return x.y>y.y;
    }
    else
    {
        return x.x<y.x;
    }
}
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        int ma=1;
        for(int i=0; i<n; i++)
        {
            scanf("%s%d%d",a[i].s,&a[i].x,&a[i].y);
        }
        sort(a,a+n,cmp);
        for(int i=1; i<n; i++)
        {
            if(a[i].x!=a[i-1].x)
            {
                ma=1;
            }
            else
            {
                ma++;
                if(ma==2&&a[i].x!=a[i+1].x)
                {
                    printf("%s %s\n",a[i-1].s,a[i].s);
                }
                else if(ma==3)
                {
                    if(a[i].y!=a[i-1].y)
                    {
                        printf("%s %s\n",a[i-2].s,a[i-1].s);
                    }
                    else
                    {
                        printf("?\n");
                    }
                }
            }
        }
    }
    return 0;
}
