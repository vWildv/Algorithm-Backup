#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
long long  gcd(long long a,long long b){
  return b==0?a:gcd(b,a%b);
}
long long lcm(long long a, long long b){
  return a/gcd(a,b)*b;
}
int main (){
  long long n,a,b,p,q,sum,maxx;
  while (~scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q)){
    sum=0;
    maxx=(n/lcm(a,b));
    sum=(n/a)*p+(n/b)*q-min(p,q)*maxx;
    printf("%lld\n",sum);
  }



return 0;
}
