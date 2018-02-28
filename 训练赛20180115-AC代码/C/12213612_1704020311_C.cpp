#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    bool flag=0;
    while(cin>>a)
    {
        flag=0;
        for(int i=0; i<a.length(); i++)
        {
            if(a[i]=='b')
            {

                if(a[i+1]=='k'&&a[i+2]=='p'&&a[i+3]=='s'&&a[i+4]=='t'&&a[i+5]=='o'&&a[i+6]=='r')
                {
                    flag=1;
                    cout<<"Warning"<<endl;
                }

            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==0)
        {
            cout<<"Safe"<<endl;
        }


    }
}
