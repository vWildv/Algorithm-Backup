#include<stdio.h>
#include<cstring>
#include<iostream>

using namespace std;

int n,hh,mm;

bool pan(int a,int b)
{
    if(a%10==7) return 0;
    if(b%10==7) return 0;
    return 1;
}

int main()
{
    while(cin>>n>>hh>>mm)
    {
        int tem=0;
        while(pan(hh,mm))
        {
            mm-=n;
            tem++;
            if(mm<0)
            {
                hh--;
                mm+=60;
            }
            if(hh<0)
                hh=23;
        }
        cout<<tem<<endl;
    }
}
