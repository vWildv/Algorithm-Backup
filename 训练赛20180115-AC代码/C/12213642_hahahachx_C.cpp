#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string str;
    string str2="bkpstor";
    while(cin>>str)
    {
        int pos=str.find(str2,0);
        if(pos==-1)
        {
            printf("Safe\n");
        }
        else
        {
            printf("Warning\n");
        }
        str.clear();
    }
}
