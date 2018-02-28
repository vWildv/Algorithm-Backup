#include<stdio.h>
int s[100005];
int q[100005];
int h[100005];
int gcd(int a,int b){
    while(a%b!=0){
        int k=a%b;
        a=b;b=k;
    }
    return b;
}
int main(){
    int a,shu;
    while(~scanf("%d",&a)){
        while(a--){
            scanf("%d",&shu);
            for(int i=0;i<shu;i++){scanf("%d",&s[i]);if(i==0)q[0]=s[0];else q[i]=gcd(q[i-1],s[i]);}
            h[shu-1]=s[shu-1];int jie=q[shu-2];
            for(int i=shu-2;i>0;i--){
                h[i]=gcd(h[i+1],s[i]);
                int x=gcd(h[i+1],q[i-1]);
                if(x>jie)jie=x;
            }
            if(h[1]>jie)jie=h[1];
            printf("%d\n",jie);
        }
    }
    return 0;
}
