#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int judge(int n)
{
    if ( n % 400 == 0 )
        return 1;
    else if ( n % 4 == 0 && n % 100 != 0 )
        return 1;
    else return 0;
}
int aa[1005];
int main ()
{
    int n;
    while ( cin>>n )
    {
        int m=n+1,l=n+1;
        if ( judge(m) )
            m++;
        while ((m-n)%7!=0||judge(l)!=judge(n))
        {
            l++;
            if (judge(l))
                m+=2;
            else m+=1;
        }
        cout<<l<<endl;
    }
    return 0;
}
