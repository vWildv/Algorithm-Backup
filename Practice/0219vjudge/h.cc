#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int is_prime(int x){
    if(x<=1) return 0;
    for(int i=2;i<=sqrt(x);i++) if(x%i==0) return 0;
    return 1;
}

int main(){
    int n;
    cin>>n;
    if(n%2) printf("3 "),n-=3;
    else printf("2 "),n-=2;
    for(int i=2;;i++)
        if(is_prime(i)&&is_prime(n-i)){
            printf("%d %d\n",i,n-i);
            return 0;
        }
}