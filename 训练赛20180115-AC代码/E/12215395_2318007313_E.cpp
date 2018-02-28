#include<stdio.h>
int han(int x)
{
    int all = 0;
    for(int i=1; i<=x; i++)
    {
        int sum = 0;
        int tmp = i;
        while(tmp != 0)
        {
            if(tmp % 2 == 0)
            {
                tmp/=2;
                sum ++;
            }else
            {
                break;
            }

        }
        all += sum;
        sum = 0;
    }
    return all;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",han(a)-han(a-b)-han(b));

    }
    return 0;
}
