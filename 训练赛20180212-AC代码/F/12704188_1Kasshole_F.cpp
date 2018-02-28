#include<iostream>

using namespace std;

int main()
{
    int num_ele,len_CW;
    while(cin>>num_ele>>len_CW){
        int num,ret=0;
        for(int i=0;i<num_ele;i++){cin>>num; ret+=num;} 
        ret==(len_CW-num_ele+1)?(cout<<"YES"<<endl):(cout<<"NO"<<endl);
    }
    return 0;
}