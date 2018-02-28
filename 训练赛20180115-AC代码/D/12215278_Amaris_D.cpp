#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int n;

    while(cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        
        static bool it = false;
        int a = 2,b = 3;
        int tmp;
        it = false;
        while(a <= n)
        {
            if(a == n || b == n)
            {
                it = true;
                break;
            }
            tmp = (a + b);
            a = b;
            b = tmp;
        }
        if(it)
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
