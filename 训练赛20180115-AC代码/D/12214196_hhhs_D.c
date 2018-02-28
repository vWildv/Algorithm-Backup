#include <stdio.h>
#include<stdbool.h>
int main()
{
    int n,ts,a,b;
    bool mark;
    while(scanf("%d",&n) && n)
    {
        a = 2,b = 3;
        mark = false;
        while(a<=n)
        {
            if(a==n || b==n)
            {
                mark = true;
                break;
            }
            ts = (a  + b);
            a = b;
            b = ts;
        }
        if(mark)
        {
            printf("Second win\n");
        }
        else
        {
            printf("First win\n");
        }
    }
    return 0;
}