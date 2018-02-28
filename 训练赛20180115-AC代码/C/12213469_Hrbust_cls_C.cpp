#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    string key="bkpstor";
    string s;
    while(cin>>s){
        int flag=0;
        int isok=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==key[0]){
                isok=1;
                for(int ps=i+1,pk=1;pk<key.size();ps++,pk++){
                    if(ps==s.size()||s[ps]!=key[pk]){
                        isok=0;
                        break;
                    }
                }
            }
            if(isok){
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"Warning"<<endl;
        else
            cout<<"Safe"<<endl;
    }
    return 0;
}
