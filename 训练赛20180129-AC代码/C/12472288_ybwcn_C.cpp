#include<stdio.h>
int main(){
    int n,a,b;
    while(~scanf("%d%d%d",&n,&a,&b)){
        int jie;
        if(b>=0){
            jie=(a+b)%n;if(jie==0)jie=n;
            printf("%d\n",jie);
            continue;
        }
        b*=-1;
        b=b%n;jie=(n+a-b)%n;if(jie==0)jie=n;
        printf("%d\n",jie);
    }
    return 0;
}
