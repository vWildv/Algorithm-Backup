#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main ()
{
    int r,g;
    while (cin>>r>>g)
    {
        if(r>g)swap(r,g);
        if ((g-r)>1||(r==0&&g==0))cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
