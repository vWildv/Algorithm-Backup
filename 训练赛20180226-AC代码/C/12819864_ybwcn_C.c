#include<stdio.h>
int x[10005];
int shu1[10005];
int shu2[10005];
int main(){
    int a;
    while(~scanf("%d",&a)){
        for(int i=0;i<a;i++)scanf("%d",&x[i]);
        int pan1=1,pan2=1;
        if(x[0]==1){
            shu1[0]=0;shu1[1]=1;shu2[0]=1;shu2[1]=0;
            for(int i=1;i<a;i++){
                shu1[i+1]=x[i]-shu1[i]-shu1[i-1];
                shu2[i+1]=x[i]-shu2[i]-shu2[i-1];
                if(shu1[i]<0||shu1[i]>1)pan1=0;
                if(shu2[i]<0||shu2[i]>1)pan2=0;
                if(pan1==0&&pan2==0)break;
            }
            if(shu1[a]!=0)pan1=0;if(shu2[a]!=0)pan2=0;
            printf("%d\n",pan1+pan2);
        }
        if(x[0]==2){
            shu1[0]=1;shu1[1]=1;
            for(int i=1;i<a;i++){
                shu1[i+1]=x[i]-shu1[i-1]-shu1[i];
                if(shu1[i]<0||shu1[i]>1)pan1=0;
                if(pan1==0)break;
            }
            if(shu1[a]!=0)pan1=0;
            printf("%d\n",pan1);
        }
        if(x[0]==0){
            shu1[0]=0;shu1[1]=0;
            for(int i=1;i<a;i++){
                shu1[i+1]=x[i]-shu1[i-1]-shu1[i];
                if(shu1[i]<0||shu1[i]>1)pan1=0;
                if(pan1==0)break;
            }
            if(shu1[a]!=0)pan1=0;
            printf("%d\n",pan1);
        }
    }
    return 0;
}
