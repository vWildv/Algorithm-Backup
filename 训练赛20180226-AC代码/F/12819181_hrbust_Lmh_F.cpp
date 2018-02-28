#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;
int mm,hh;

bool f()
{
    if(hh%10==7||hh/10==7)
        return true;
    if(mm%10==7||hh/10==7)
        return true;
    return false;
}

int main()
{

    ios::sync_with_stdio(false);
    int x;
    while(cin>>x>>hh>>mm)
    {
        int ans=0;
        while(!f())
        {
            mm-=x;
            ans++;
            if(mm<0)
            {
                hh--;
                mm+=60;
            }
            if(hh<0)
                hh=23;
        }
        cout<<ans<<endl;
    }


    return 0;
}
