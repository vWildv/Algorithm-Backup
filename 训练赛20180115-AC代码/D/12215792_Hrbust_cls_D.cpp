#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#define ll long long
using namespace std;

int fac[50];

int main()
{
    fac[0]=1;
    fac[1]=2;
    for(int i=2;i<=44;i++)
        fac[i]=fac[i-1]+fac[i-2];
    int n;
    while(cin>>n){
        if(n==0) break;
        int flag=1;
        for(int i=1;i<=44;i++)
            if(n==fac[i]){
                printf("Second win\n");
                flag=0;
                break;
            }
        if(flag)
            printf("First win\n");
    }
    return 0;
}
