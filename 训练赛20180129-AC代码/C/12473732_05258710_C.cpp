#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main ()
{
    int n,a,b;
    cin>>n>>a>>b;
    
        int tmp=b%n;
        if (a+tmp<1)
            tmp+=n;
        else if(a+tmp>n)
            tmp-=n;
        cout<<a+tmp<<endl;
    
}
