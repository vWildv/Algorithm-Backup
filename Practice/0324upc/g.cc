#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long k,sum=0;
    scanf("%lld",&k);
    int n=1,i=1;
    while(i+n<=k) sum+=n*n,i+=n,n++;
    sum+=n*(k-i)+n;
    printf("%lld\n",sum);
}