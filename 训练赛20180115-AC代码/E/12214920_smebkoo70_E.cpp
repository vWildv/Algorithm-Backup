#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int factorial(int m)
{
    int a=0;
    for(int i=1; i<=m; i++)
    {
        int yu,sh;
        sh=i;
        yu=sh%2;
        while(yu==0)
        {
            a++;
            sh=sh/2;
            yu=sh%2;
        }
    }
    return a;
}
int main()
{
    int looptimes;
    int m,n;
    int a,b,c,res;
    cin >> looptimes;
    while(looptimes--)
    {
        cin >> m >> n;
        a=factorial(m);
        b=factorial(n);
        c=factorial(m-n);
        res=a-b-c;
        cout << res << endl;
    }
    return 0;
}
