#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,t,a[102];
    while(~scanf("%d%d",&n,&t))
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int sum=0;
        int u=0;
        int k=0;
        while(1)
        {
          k+=86400-a[u++];
          if(k>=t)break;

        }
        printf("%d\n",u);
    }
}
