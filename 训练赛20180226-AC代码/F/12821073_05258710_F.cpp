#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int cnt,x;
void minu(int &hh,int &mm)
{
    mm-=x;
    while(mm<0)
    {
        hh--;
        mm+=60;
    }
    while(hh<0)
    {
        hh+=24;
    }
    cnt++;
}

int main ()
{
    int hh,mm;
    cin>>x>>hh>>mm;
    cnt=0;
    while (1)
    {
        if (hh%10==7||mm%10==7)
        {
            break;
        }
        minu(hh,mm);
    }

    cout<<cnt<<endl;
}
