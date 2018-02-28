#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {
        bool flag =0;
        for(int i=0; i<str.length(); i++)
        {
            if(str[i]=='b')
            {
                if(str[i+1]=='k')
                {
                    if(str[i+2]=='p')
                        if(str[i+3]=='s')
                            if(str[i+4]=='t')
                                if(str[i+5]=='o')
                                    if(str[i+6]=='r')
                                    {
                                        flag = 1;

                                    }
                }
            }

        }
        if(flag)
        {
            cout<<"Warning"<<endl;
        }
        else cout<<"Safe"<<endl;
    }

}
