#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

string a,b;

int judge(int pos){
    for(int i=0;i<a.length();i++) 
        if(b[pos+i]!=a[i]) return 0;
    if(b[pos+a.length()]!=' ') return 0;
    return 1;
}

int main(){
    getline(cin,a);
    getline(cin,b);
    for(int i=0;i<a.length();i++) 
        if(a[i]>='A'&&a[i]<='Z') a[i]=a[i]-'A'+'a';
    for(int i=0;i<b.length();i++) 
        if(b[i]>='A'&&b[i]<='Z') b[i]=b[i]-'A'+'a';
    int cnt=0,pos=-1;
    b=" "+b;
    for(int i=0;i<b.length();i++)
        if(b[i]==' '&&b[i+1]!=' '){
            if(judge(i+1)){
                cnt++;
                if(pos==-1) pos=i;
            }
        }
    if(cnt==0) printf("-1");
    else printf("%d %d",cnt,pos);
}