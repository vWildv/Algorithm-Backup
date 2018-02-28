#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
bool judge(int num)
{
    if(num%10==7||num/10==7)
        return true;
    else return false;
}
int main()
{
    int jiange,hh,mm,i;
    while(cin>>jiange>>hh>>mm)
    {
        int sum=0;
        if(judge(hh)||judge(mm))
            cout<<'0'<<endl;
        else
        {
//            bool solve=false;
            while(1)
            {
                sum++;
//                cout<<sum<<endl;
                if(mm-jiange<0)
                {
                    hh--;
                    if(hh==-1)
                        hh=23;
                    mm=mm+60-jiange;
                }
                else mm=mm-jiange;
                if(judge(hh)||judge(mm))
                {
//                    solve=true;
                    cout<<sum<<endl;
                    break;
                }

            }
        }
    }
}
