#include<iostream>
#include<cstdio>
#define TIME 86400
using namespace std;

int main(){
    int n, t, freetime, a[100];
    while(~scanf("%d%d",&n, &t)){
        for(int i = 0; i < n; i ++)
            cin>>a[i];
        freetime = TIME - a[0];
        for(int i = 1; i <= n; i ++){
            if(freetime >= t){
                cout<<i<<endl;
                break;
            }
            else
                freetime += (TIME - a[i]);
        }
    }
    return 0;
}
