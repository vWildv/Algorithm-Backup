#include <stdio.h>
#include <algorithm>
int main()
{
    int ans;
    int a, b, n;
    scanf("%d%d%d",&n,&a,&b);
    if( b > 0 ){
         ans = (a + b) % n;
        if (ans == 0)
            ans = n;
        printf("%d\n",ans);
    }
    else{
        b = abs(b) % n;
        if (b == 0)
            b = n;
        if (a > b)
        {

            printf("%d\n",a-b);
        }
        else
        {
            printf("%d\n",n-(b-a));
        }
    }
}