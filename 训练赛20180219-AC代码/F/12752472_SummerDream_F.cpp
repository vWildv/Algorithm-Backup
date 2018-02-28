#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        int sum=0;
        if(a%2==0) /// all CP are at table
        {
            sum=a/2+(b+c)/4;
            if((b+c)%4!=0)sum++;
        }
        else
        {
            sum=a/2;
            if(b>=1&&c>=1)  ///there still is a boy and a girl are CP
            {
                sum++;
                if((b+c-2)%4!=0)
                    sum=sum+1+(b+c-2)/4;
                else sum=sum+(b+c-2)/4;
            }
            else
            {
                if(b==0&&c==0)sum++;
                else if(b==0)
                {
                    sum++;
                    if((c-1)%4!=0)
                        sum=sum+1+(c-1)/4;
                    else sum=sum+(c-1)/4;
                }
                else if(c==0)
                {
                    sum++;

                    if((b-1)%4!=0)
                        {sum=sum+1+(b-1)/4;}
                    else sum=sum+(b-1)/4;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
