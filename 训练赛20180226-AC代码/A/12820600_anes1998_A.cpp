#include<stdio.h>
#include<iostream>
#define mod 100003
#define Long long long int
using namespace std;

Long pow(Long a,Long b){
  Long r=1;
  while(b){
    if(b&1) r=(r*a)%mod;
    a=(a*a)%mod;
    b>>=1;
  }
  return r;
}

int main()
{
    Long M,N;
    while(~scanf("%lld%lld",&M,&N))
    {
        Long st1,st2;
        st1=pow(M,N)%mod;
        st2=M*pow(M-1,N-1)%mod;
        Long sum;
        sum=(st1-st2)%mod;
        if(sum<0)
            sum+=mod;
        cout<<sum<<endl;
    }
}
