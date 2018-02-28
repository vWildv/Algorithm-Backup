#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,x,a[100002];
    while(~scanf("%d%d",&n,&x))
    {int sum=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        int u=0;
         if(sum+n-1==x)u=1;
         if(u==1)printf("YES\n");
         else printf("NO\n");

    }
}
