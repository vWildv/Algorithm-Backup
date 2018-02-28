#include<stdio.h>
int chu(long long int x){
    int c=0;
    while(x!=0){
        c+=x%10;
        x/=10;
    }
    return c;
}
int main(){
    int a;
    while(~scanf("%d",&a)){
        long long jie=19;a--;
        while(a--){
            jie++;
            for(;;jie++){
                if(chu(jie)==10)break;
            }
        }
        printf("%d\n",jie);
    }
    return 0;
}
