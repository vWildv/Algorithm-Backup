#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int main()
{
    string str;
    string sos = "bkpstor";
    while(cin >> str)
    {
        int t = str.size();
        if(str.find(sos) <= t)
        {
            printf("Warning\n");
        }
        else
        {
            printf("Safe\n");
        }
    }
    return 0;
}
