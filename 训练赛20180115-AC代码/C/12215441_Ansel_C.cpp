#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
#include<queue>
using namespace std;
int main()
{
    string a,b="bkpstor";
    while(cin>>a)
    {
        if(a.find(b)<a.size())
             printf("Warning\n");
        else
            printf("Safe\n");
    }

}
