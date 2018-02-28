#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n) && n)
    {
        int a=2, b=3;
        int flag = 0;
        while(a<=n)
        {
            if(a==n || b==n)
            {
                flag = 1;
                break;
            }
            int tmp = a+b;
            a = b;
            b = tmp;
        }
        if(flag)
        {
            printf("Second win\n");
        }else
        {
            printf("First win\n");
        }
    }
    return 0;
}
