#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
int Mod1 = 366%7;
int Mod2 = 365%7;
bool isleap(int n)
{
    return ((n%400==0)||(n%4==0&&n%100!=0));
}
int main()
{
    int n;
    while(cin>>n)
    {
        int ans=0;
        for(int i=n+1;; ++i)
        {
            if(isleap(i))
                ans+=Mod1;
            else
                ans+=Mod2;
            if(ans%7==0 && (isleap(n)==isleap(i)))
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
