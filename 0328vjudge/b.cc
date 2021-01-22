#include <bits/stdc++.h>
using namespace std;

long long Sum(int x){
    long long ans=0;
    for(int i=0;i<=x;i++) ans+=i;
    return ans;
}

int main(){
    int m,b;
    long long ans=-1;
    scanf("%d%d",&m,&b);
    for(int y=0;y<=b;y++){
        long long x=m*(b-y);
        //long long sum=Sum(x)*(y+1)+Sum(y)*(x+1);
        long long sum=x*(x+1)/2*(y+1)+y*(y+1)/2*(x+1);
        ans=max(ans,sum);
    }
    printf("%lld\n",ans);
}
