#include<stdio.h>



int main(){
    
    int n,ts;
    int mark;
int a,b;

    while(scanf("%d",&n) && n){
        a = 2,b = 3;
        mark = 0;
        while(a<=n){
            if(a==n || b==n){
                mark = 1;
                break;
            }
            ts = (a  + b);
            a = b;
            b = ts;
        }
        if(mark==1){
            printf("Second win\n");
        }else{
            printf("First win\n");
        }
    }
    return 0;
}
