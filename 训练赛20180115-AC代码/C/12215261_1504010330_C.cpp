#include<cstdio>
#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
char str[105];
while(cin>>str){
    if(strstr(str,"bkpstor")){
        cout<<"Warning"<<endl;
    }
    else cout<<"Safe"<<endl;
}
}
