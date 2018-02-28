#include<stdio.h>
int sheng(double x){
    int y=x;
    double x1=x-y;
    int s=1;
    while(x1>=0.5){x1+=x;if(x1>1)x1-=(int)x1;s++;}
    return s;
}
int main(){
    double k;int n;
    while(~scanf("%d%lf",&n,&k)){
        k*=0.9;

        int x=sheng(k)*k;
        int jie=n/sheng(k);
        jie*=x;
        double y=n%sheng(k);
        y*=k;int z=y;double xiao=y-z;if(xiao>=0.5)z++;
        jie+=z;
        printf("%d\n",jie);
    }
    return 0;
}
