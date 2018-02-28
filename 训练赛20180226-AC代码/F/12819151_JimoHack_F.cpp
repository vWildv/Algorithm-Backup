#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int m;
class time
{
public:
    int h,s;
    void  sub()
    {
        if(s-m<0)
        {
            s+=60;
            --h;
            if(h<0)
            {
                h=23;
            }
        }
            s-=m;
    }
    bool check()
    {
        int a=h%10,b=h/10,c=s%10,d=s/10;
        return (a==7||b==7||c==7||d==7)?true:false;
    }
};
int main ()
{
    time mytime;
    while(~scanf("%d",&m))
    {
        int cnt=0;
        scanf("%d%d",&mytime.h,&mytime.s);
        while(!mytime.check())
        {
            ++cnt;
            mytime.sub();
        }
        printf("%d\n",cnt);
    }
}
