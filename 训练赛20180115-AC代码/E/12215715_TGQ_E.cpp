#include<string.h>
#include<iostream>
using namespace std;
int ak(int n)
{
    int a, b = 0;
    for(int i = 1; i <= n; i ++)
    {
        int c = i;
        a = 0;
        while(c != 0)
        {
            if(c % 2 == 1)
            break;
            else
            {
                a ++;
                c /= 2;
            }
        }
        b += a;
    }
    return b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin >> m >> n;
        cout<<ak(m)-ak(m-n)-ak(n)<<endl;
    }
}
