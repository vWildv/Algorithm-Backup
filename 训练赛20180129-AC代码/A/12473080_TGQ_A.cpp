#include <stdio.h>
int PD(int n)
{
    if( n%400 == 0 )
        return 1;
    if( n%4 == 0&&n%100 != 0)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    const int year = 365;
    while(~scanf("%d",&n))
    {
    int i = n+1;
    int j;
    j = (year + PD(i))%7;
    while( j != 0||PD(n) != PD(i))
        j = (j + year + PD(++i))%7;
    printf("%d\n",i);
    }
}
