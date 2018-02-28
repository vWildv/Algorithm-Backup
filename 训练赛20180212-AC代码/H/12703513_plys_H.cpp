#include<stdio.h>
int a[1000005];
int main()
{
    int n,t;
    while(~scanf("%d%d",&n,&t))
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=86400-a[i];
            if(sum>=t)
            {
                printf("%d\n",i+1);
                break;
            }
        }
    }
}
