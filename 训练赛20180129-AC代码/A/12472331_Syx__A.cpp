#include <iostream>
#include<cstdio>
using namespace std;
int y;
int check(int y)
{
    if(!(y % 400) || !(y % 4)&& y % 100)
        return 1;
    return 0;
}
int main()
{
    while(~scanf("%d",&y))
    {
        int ans = 0;
        int year = y;
        while(true)
        {
            year += 1;
            if(check(year))
                ans += 2;
            else
                ans++;
            if(!(ans % 7)&& check(year) == check(y))
            {
                printf("%d\n",year);
                break;
            }
        }
    }
}
