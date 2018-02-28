#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
int main ()
{
    string str1;
    string str2="bkpstor";
    while(cin>>str1)
    {
    int judge;
    judge=str1.find(str2);
    if(judge==-1)
    {
        cout<<"Safe"<<endl;
    }
    else
    {
        cout<<"Warning"<<endl;
    }
    }
    return 0;
}
