#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    long long a,b;
    while(t--){
        scanf("%lld%lld",&a,&b);
        printf("%lld\n",a+b);
    }
}