#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
typedef long long int int64;
int main()
{
    int n,a,b;
    while(~scanf("%d%d%d",&n,&a,&b))
    {
        int flag = (b<0)?-1:1;
        int now = a;
        for(int i = 1; i<=abs(b); ++i)
        {
                now+=flag;
                if(now<=0) now=n;
                if(now>n) now=1;
                ///cout<<now<<endl;
        }
        cout<<now<<endl;
    }
}
