#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a="bkpstor";
    string b;
    while(cin>>b){
        int aa=b.find(a);
//        printf("%d\n",aa);
        if(aa==-1){
            puts("Safe");
        }
        else{
            puts("Warning");
        }
    }
    return 0;
}
