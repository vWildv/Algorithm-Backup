#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
int a[10005];
int b[10005];
int pan(int x1,int y1,int x2,int y2,int x3,int y3)
{
    if(((x2-x1)*(y3-y2)-(x3-x2)*(y2-y1))>0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int ma=0;
        for(int i=0;i<=n;i++)
        {
            scanf("%d%d",&a[i],&b[i]);
        }
        for(int i=2;i<=n;i++)
        {
            if((pan(a[i-2],b[i-2],a[i-1],b[i-1],a[i],b[i]))==1)
            {
                ma++;
            }
        }
        printf("%d\n",ma);
    }
    return 0;
}
