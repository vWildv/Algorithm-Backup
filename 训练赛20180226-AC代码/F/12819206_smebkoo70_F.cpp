#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
using namespace std;
class zhongbiao
{
public:
    int x,hour,minute;
    bool fun1()
    {
        if (hour % 10 == 7||minute % 10 == 7)
            return 1;
        else return 0;
    }
    int shizhong()
    {
        minute = minute - x;
        if (minute < 0) {
            minute += 60;
            hour--;
        }
        if (hour < 0)hour += 24;
    }
};
int main()
{
    zhongbiao zhong;
    while(scanf("%d",&zhong.x)!=EOF)
    {
        scanf("%d%d",&zhong.hour,&zhong.minute);
        int i = 0;
        for(i=0; !zhong.fun1(); i++)
        {
            zhong.shizhong();
        }
        cout << i << endl;
    }
}
