#include<stdio.h>
using namespace std;

int main()
{
    long k, n = 19, sum = 0, m;
    while(~scanf("%ld", &k)){n=19;sum=0;
    while (k - 1>0)
    {
        sum = 0;
        n++;
        m = n;
        while (m>0)
        {
            sum += m % 10;
            m /= 10;
        }
        if (sum == 10)
        {
            k--;
        }
    }
    printf("%ld\n", n);}

}
