#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int x,ans;
    int hh,mm;
    while(cin>>x>>hh>>mm)
    {
        ans=0;
        if(mm%10==7||mm%100==7||hh%10==7||hh%100==7)
        {
            cout<<0<<endl;
            continue;
        }
        for(int i=1;; i++)
        {
            mm-=x;
            if(mm<0)
            {
                mm+=60;
                hh--;
                if(hh<0)hh+=24;
                //cout<<hh<<":"<<mm<<endl;
            }
            if(mm%10==7||mm%100==7||hh%10==7||hh%100==7)
            {
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
