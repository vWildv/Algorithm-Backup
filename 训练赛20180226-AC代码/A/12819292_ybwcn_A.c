#include<stdio.h>
long long int mo=100003;
long long int kuai(long long int a,long long int b){
    long long int x=1;
    while(b!=1){
        if(b%2==1)x=(x*a)%mo;
        b/=2;
        a=(a*a)%mo;
    }
    x=(x*a)%mo;
    return x;
}
int main(){
    long long int h,m;
    while(~scanf("%lld%lld",&h,&m)){
        long long int y=kuai(h,(m-1))-kuai((h-1),(m-1));
        if(y<0)y+=mo;
        y=(y*h)%mo;
        printf("%lld\n",y);
    }
    return 0;
}
