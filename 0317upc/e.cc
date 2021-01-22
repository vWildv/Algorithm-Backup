#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int c[1005];

int qpow(int x,int y){
    int ans=1;
    while(y>0){
        if(y&1) ans*=x,ans%=10007;
        x*=x;
        x%=10007;
        y/=2;
    }
    return ans;
}

int main(){
    int a,b,k,n,m;
    scanf("%d%d%d%d%d",&a,&b,&k,&n,&m);
    int ans=qpow(a%10007,n)*qpow(b%10007,m)%10007;
    c[1]=1,c[2]=1;
    for(int i=2;i<k;i++)
        for(int j=i+1;j>=1;j--) c[j]=(c[j]+c[j-1])%10007;
    ans=(c[min(n,m)]+c[min(n,m)+1])%10007*ans;
    printf("%d\n",ans%10007);
}