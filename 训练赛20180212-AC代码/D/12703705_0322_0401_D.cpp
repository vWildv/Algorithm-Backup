#include<stdio.h>

int main()
{
    int k;
    int a[10005] = {0};
    int i = 1;
    int j = 0;
    while(i <= 10000)
    {
        j ++;
        int sum = 0;
        int num = j;
        while(num > 0)
        {
            sum += num%10;
            num /= 10;
        }
        if(sum == 10)
        {
            a[i++] = j;
        }
    }
    while(~scanf("%d",&k))
    {
        printf("%d\n",a[k]);
    }
    return 0;
}
