#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int a;
        int vis=0;
        int b[n];
        memset(b,0,sizeof(b));
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a);
            int temp=0;
            for(int i=0;i<=vis;i++)
            {
                if(b[i]>=a)
                {
                    b[i]=a;
                    temp=1;
                    break;
                }
            }
            if(temp!=1)b[++vis]=a;
        }
        printf("%d\n",vis);
    }
}
