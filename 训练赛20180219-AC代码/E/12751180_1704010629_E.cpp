#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
    int r,g;
    while(~scanf("%d%d",&r,&g)){
        if(abs(r - g) > 1||r==0&&g==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}















