#include <bits/stdc++.h>
using namespace std;

#define ll long long

string s;

int check(string a){
    string b,c;
    c=a;
    b=c[c.size()-1];
    b=b+c; b.erase(b.size()-1);
    c=b;
    if(a==b) return 1;
    while(a<b){
        b=c[c.size()-1];
        b=b+c; b.erase(b.size()-1);
        c=b;
        if(a==b) return 1;
    }
    return 0;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        cin>>s;
        int len=s.length();
        string tmp;
        int pos=0;
        int key=len;
        bool flag=0;
        for(int i=0;i<len;){
            tmp=s.substr(i,key);
            while(check(tmp)==0){
                tmp.erase(tmp.size()-1);
            }
            if(flag==0){
                cout<<tmp;
                flag=1;
            }
            else{
                cout<<" "<<tmp;
            }
            i+=tmp.size();
            key=len-i;
        }
        cout<<endl;
    }
}
