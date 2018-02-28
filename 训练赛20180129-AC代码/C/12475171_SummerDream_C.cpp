#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
main()
{
    int num,a,b;
    while(cin>>num>>a>>b)
    {
        if(b==0)cout<<a<<endl;
        else if (b>0)
        {
            if((a+b)%num==0)cout<<num<<endl;
            else cout<<(a+b)%num<<endl;
        }
        else
        {
            b=(-b)%num;
            if(b==0)cout<<a<<endl;
            else if(a>b)cout<<a-b<<endl;
            else cout<<num-(b-a)<<endl;
        }
    }
    return 0;
}
