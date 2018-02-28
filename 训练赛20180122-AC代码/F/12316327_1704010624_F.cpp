

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int a[10000],b[100000],i,j,flag,n;
    while(~scanf("%d",&n))
    {
        b[0] = flag = 0;
        for(i = 0;i < n;i++)
        {

            scanf("%d",&a[i]);
            for(j = 0;j <= flag;j++)
            {
                if(a[i] <= b[j])
                {
                    b[j] = a[i];
                    break;
                }
                else if(j == flag)
                {
                    flag++;
                    b[flag] = a[i];
                    break;
                }
            }

        }
        printf("%d\n",flag);
    }
}
