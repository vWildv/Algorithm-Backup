#include<iostream>
using namespace std;
long long  pow(long long a,long long b)
{
    long long r=1,base=a%100003;
    while(b)
    {
        if(b&1)r=(r*base)%100003;
        base=(base*base)%100003;
        b>>=1;
    }
    return r;
}
int main()
{
    long long m,n;
    cin>>m>>n;
    long long q=pow(m,n)-(m*pow(m-1,n-1))%100003;
    if(q<0)q+=100003;
    cout<<q<<endl;
}
