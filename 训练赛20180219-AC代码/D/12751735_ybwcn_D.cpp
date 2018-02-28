#include<stdio.h>
long long int s[6][10005];
long long int mo=1000000007;
int main(){
    int a,n,k;
    for(int i=1;i<=10000;i++){
        s[0][i]=1;
        s[1][i]=i;
        s[2][i]=(s[1][i]*i)%mo;
        s[3][i]=(s[2][i]*i)%mo;
        s[4][i]=(s[3][i]*i)%mo;
        s[5][i]=(s[4][i]*i)%mo;
    }
    while(~scanf("%d",&a)){
        while(a--){
            scanf("%d%d",&n,&k);
            long long int jie=0;
            for(int i=1;i<=n;i++){
                jie=(jie+s[k][i])%mo;
            }
            printf("%lld\n",jie);
        }
    }
    return 0;
}
