#include<stdio.h>
int main(){
    int n,p,q;
    while(~scanf("%d%d%d",&n,&p,&q)){
        int jie=0;
        jie+=n/2;
        if(n%2==1){if(p>0)p--;if(q>0)q--;jie++;}
        int x=p+q;
        jie+=x/4;
        if(x%4!=0)jie++;
        printf("%d\n",jie);
    }
    return 0;
}
