#include<cstring>
#include<iostream>
#include<cstdio>
using namespace std;


int main(){
    string a;
    while(cin>>a){

            string b = "bkpstor";
            int found = a.find(b);

         if(found != string::npos)
            cout<<"Warning"<<endl;
            else cout<<"Safe"<<endl;
    }
    return 0;

}
