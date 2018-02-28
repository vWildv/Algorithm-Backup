#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    while(cin>>a)
    {string b="bkpstor";
    int idx=a.find(b);//在a中查找b.
    if(idx ==-1 )//不存在。
        cout <<"Safe"<<endl;
    else//存在。
        cout <<"Warning"<<endl;
    }
    return 0;
}
