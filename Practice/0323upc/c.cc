#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,i,j,ans;
    scanf("%d%d%d",&n,&i,&j);
    if(i>n/2&&j>n/2) ans=min(n-i+1,n-j+1);
    if(i>n/2&&j<=n/2) ans=min(n-i+1,j);
    if(i<=n/2&&j<=n/2) ans=min(i,j);
    if(i<=n/2&&j>n/2) ans=min(i,n-j+1);
    if(i>j)printf("%d\n",-4*ans*ans+4*n*ans+2*ans+1-i-j);
    else printf("%d\n",-4*ans*ans+4*ans*n-4*n+6*ans+i+j-3);
}
