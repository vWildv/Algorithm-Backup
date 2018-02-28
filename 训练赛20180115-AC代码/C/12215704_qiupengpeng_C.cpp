#include<cstring>
#include<iostream>
#include<cstdio>
using namespace std;


int main(){
    string a;
    while(cin>>a){

            string b = "bkpstor";
            int fo = a.find(b);
            int t = a.size();
         if(fo == -1)
           cout<<"Safe"<<endl;
            else cout<<"Warning"<<endl;
    }
    return 0;

}
