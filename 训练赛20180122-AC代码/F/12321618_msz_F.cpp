#include <stdio.h>
int main()
{
    int n,a[10005];
    while(scanf("%d",&n) != EOF)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int count = 0;
        int min;
        for(int i=0;i<n;i++)
        {
            if(a[i])
            {
                min = a[i];
                count ++;
                for(int j=i+1;j<n;j++)
                {
                    if(a[j] && min >= a[j])
                    {
                        min = a[j];
                        a[j] = 0;
                    }
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
