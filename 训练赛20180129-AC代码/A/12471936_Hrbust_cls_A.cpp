#include<bits/stdc++.h>
#define LL long long
using namespace std;

bool isleap(int y)
{
    if(y%400==0||y%4==0&&y%100!=0) return true;
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    int y;
    while(cin>>y){
        int ny=0;
        int t=y;
        while(true){
            t++;
            if(isleap(t)){
                ny+=2;
                ny%=7;
            }
            else{
                ny++;
                ny%=7;
            }
            if(ny==0&&isleap(t)==isleap(y)){
                cout<<t<<endl;
                break;
            }
        }
    }
    return 0;
}
