#include <bits/stdc++.h>
using namespace std;

#define ll long long

string s;
string a,b;
vector <string> res;

int checknum(string vs){
    if(!res.size()) return 0;
    if(res.size()!=1&&vs[0]=='0') return 0;
    for(int i=0;i<res.size();i++){
        if(res[i]<'0'||res[i]>'9') return 0;
    }
    return 1;
}

int main(){
    cin>>s;
    s += ",";
    int pos=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==';'||s[i]==','){
            res.push_back(s.substr(pos,i-pos));
            pos=i+1;
        }
    }

    for(int i=0;i<res.size();i++){
        if(checknum(vs[i])){
            a=a+",";
            a=a+res[i];
        }
        else{
            b=b+",";
            b=b+res[i];
        }
    }
    if(a.size()){
        a[0] = '"';  a[a.size()-1]='"';
        cout<<a<<endl;
    }
    else printf("-\n");
    if(b.size()){
        b[0] = '"'; b[b.size()-1]='"';
        cout<<b<<endl;
    }
    else printf("-\n");
}
