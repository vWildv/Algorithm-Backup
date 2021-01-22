#include <bits/stdc++.h>
using namespace std;

string a[100005];
struct node{
    int num1;
    int num0;
    int id;
}c[100005];

void check(string s,int p){
    int cnt=0;
    c[p].num1=0; c[p].num0=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            cnt++;
            c[p].num1++;
        }
        else if(s[i]=='0'){
            c[p].num0++;
        }
        else{
            c[p].id=0;
            return;
        }
        if(cnt>1){
            c[p].id=0;
            return;
        }
    }
    c[p].id=1;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int pos=0; int flag=0; int cnt=0;
    for(int i=1;i<=n;i++){
        check(a[i],i);
        if(c[i].id==0) pos=i;
        else{
            if(c[i].num1==0){
                flag=1;
                //printf
                break;
            }
            else cnt+=c[i].num0;
        }
    }
    if(flag) printf("0\n");
    else{
        if(pos==0){
            printf("1");
            for(int i=1;i<=cnt;i++) printf("0");
            printf("\n");
        }
        else{
            cout<<a[pos];
            for(int i=1;i<=cnt;i++) printf("0");
            printf("\n");
        }
    }
}
