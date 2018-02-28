#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
    char str[101];
    while(gets(str)!=NULL){
        int i, j, len = strlen(str), b = 1;
        for(i = 0; i < len - 6; i ++){
            if(str[i] == 'b' && str[i + 1] == 'k' && str[i + 2] == 'p'
               &&str[i + 3] == 's' && str[i + 4] == 't' && str[i + 5] == 'o'
               &&str[i + 6] == 'r'){
                cout<<"Warning"<<endl;
                b = 0;
                break;
            }
        }
        if(b)
            cout<<"Safe"<<endl;
    }
}
