#include<stdio.h>
unsigned long Fib(int n)
{
    int i;
    unsigned long a = 0, b = 1, c;
    if (n <= 1)
        return n;
    else
    {
        for (i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}
int main()
{
    int a[50];
    for(int i=3; i<50; i++)
        a[i]=Fib(i);
    int n, flag;
    while(scanf("%d", &n) && n!=0)
    {
        flag=0;
        for(int i=3; i<50; i++)
        {
            if(a[i]==n){
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("First win\n");
        else
            printf("Second win\n");
    }
    return 0;
}
