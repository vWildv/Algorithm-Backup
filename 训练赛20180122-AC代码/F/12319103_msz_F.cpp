#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d", &n))
    {
        int i, j, num=-1;
        int high, a[100];
        for(i=0; i<n; i++)
        {
            scanf("%d", &high);
            for(j=0; j<=num; j++)
            {
                if(a[j] >= high)
                {
                    a[j] = high;
                    break;
                }
            }
            if(j > num)
            {
                num++;
                a[num] = high;
            }
        }
        printf("%d\n", num+1);
    }
    return 0;
}