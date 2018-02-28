#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
int a[1005];
int cmp(int x,int y)
{
    return x>y;
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        memset(a,0,sizeof(a));
        int ma;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ma);
            a[ma]++;
        }
        sort(a,a+1005,cmp);
        printf("%d\n",n-a[0]);
    }
    return 0;
}
