#include<iostream>

using namespace std;

int Div(int num);

int main(){
    int NumberK;
    while(cin>>NumberK){
        int Count=0;
        for(int i=19; ;i++){
            if(Div(i)==10){
                ++Count;
                if(Count==NumberK){cout<<i<<endl; break;}
            }
        }
    }
    return 0;
}
int Div(int num){
    int ret=0;
    while(num!=0){
        ret += num%10;
        num/=10;
    }
    return ret;
}