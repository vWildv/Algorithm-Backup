#include<bits/stdc++.h>
#define LL long long
using namespace std;

int main()
{
    int n,a,b;
    while(cin>>n>>a>>b){
        while(b<0) b+=n;
        a+=b;
        a%=n;
        if(a==0) a=n;
        cout<<a<<endl;
    }
    return 0;
}

