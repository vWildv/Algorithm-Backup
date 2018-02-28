#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;
long long fib[10005];
int main()
{
    fib[0]=1;
    fib[1]=1;
    for(int i=2; i<=105; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    long long num;

    while(~scanf("%lld",&num)&&num)
    {

        int flag=0;
        for(int i=1; i<=105; i++)
        {
            if(num==fib[i])
            {
                flag=1;
                printf("Second win\n");
                break;
            }
        }
        if(flag==0)
        {
            printf("First win\n");
        }
    }
    return 0;
}
