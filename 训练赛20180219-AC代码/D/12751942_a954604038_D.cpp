#include <stdio.h>
#include <cstring>
#define M 1000000007
int main()
{
    int T;
    scanf("%d", &T);
    int n, k;
    long long s, sum;
    while(T --)
    {
        scanf("%d%d",&n, &k);
        sum = 0;
        for(int i = 1; i <= n; i ++)
        {
            s = 1;
            for(int j = 0; j < k; j ++)
            {
                s *= i;
                if(s > M)
                s = s % M;
            }
            sum += s;
            if(sum > M)
                sum = sum % M;
        }
        printf("%I64d\n", sum);
    }
}
