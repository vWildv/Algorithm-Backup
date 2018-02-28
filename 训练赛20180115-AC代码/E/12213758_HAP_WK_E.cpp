#include<iostream>
#include<stdio.h>
using namespace std;
int jie(int n)
{
    int i,sum=0,tmp;
    int j = 0;
    for ( i = 1 ; i <= n ; i ++ )
    {
        tmp = i;
        for ( j = 0 ; tmp % 2 == 0 ; j ++ )
            tmp /= 2;
        sum += j;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int m , n ;
        int C;
        cin>>m>>n;
        C = jie(m) - (jie(m - n)+jie(n));
        cout<<C<<endl;
    }
    return 0;
}
