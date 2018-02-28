#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
using namespace std;

int m,n;

int f()
{
    if(m%10==7||m/10==7)
        return 1;
    if(n%10==7)
        return 1;
    return 0;
}

int main()
{
    int t;
    while(cin>>t)
    {
        cin>>m>>n;
        int sum=0;
        while(!f())
            {
                n-=t;
                sum++;
                if(n<0)
                {
                    m--;
                    n+=60;
                }
                if(m<0)
                    m=23;
            }
            printf("%d\n",sum);
    }
}
