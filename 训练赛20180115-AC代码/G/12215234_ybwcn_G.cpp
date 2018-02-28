#include<stdio.h>
#include<string.h>
int jie[40240];
int max1(int a,int b){
    if(a>b)return a;
    else return b;
}
int main(){
    int m,n,s,v;
    while(~scanf("%d%d",&m,&n)){
        if(m>40200)m=40200;
        memset(jie,0,sizeof(jie));
        for(int i=0;i<n;i++){
            scanf("%d%d",&v,&s);
            for(int j=m;j>=v;j--){
                jie[j]=max1(jie[j-v]+s,jie[j]);
            }
        }
        printf("%d\n",jie[m]);
    }
    return 0;
}
