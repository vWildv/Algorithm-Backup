#include<iostream>
#include<cstdio>
using namespace std;
long long fri[200];
int i;
main()
{
    fri[1]=1;
    fri[2]=1;
    for(i=3; i<93; i++)
        fri[i]=fri[i-1]+fri[i-2];
    long long num;
    while(cin>>num)
    {
        if(num==0)return 0;
        else
        {bool judge=false;
        for(i=1; i<200; i++)
        {
            if(num<fri[i])break;
            if(num==fri[i])
            {
                judge=true,cout<<"Second win"<<endl;
                break;
            }
        }
        if(judge==false)cout<<"First win"<<endl;}

    }
    return 0;
}
