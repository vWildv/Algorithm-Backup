#include<stdio.h>
int min1(int a,int b){
    if(a>b)return b;
    else return a;
}
int gcd(int a,int b){
    while(a%b!=0){
        int k=a%b;
        a=b;b=k;
    }
    return b;
}
int main(){
    long long int n,a,b,p,q;
    while(~scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q)){
        long long int jie1=n/a;jie1*=p;
        long long int jie2=n/b;jie2*=q;
        long long int x=a*b/gcd(a,b);long long int jie3=n/x;jie3*=min1(p,q);
        long long int jie=jie1+jie2-jie3;
        printf("%lld\n",jie);
    }
    return 0;
}
