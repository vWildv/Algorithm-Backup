#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <queue>
#include <string>
#include <vector>
using namespace std;
char vir[8]="bkpstor";
int main()
{
    char cstr[105];
    while(gets(cstr))
    {
        string str=cstr;
        if(str.find(vir)!=-1)
            cout<<"Warning"<<endl;
        else
            cout<<"Safe"<<endl;
    }
}
