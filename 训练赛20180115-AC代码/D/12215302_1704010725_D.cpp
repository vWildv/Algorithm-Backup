#include<stdio.h>

int fib[50];

int main(){
    fib[0]=1;fib[1]=2;
    for(int i=2;i<45;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    int n;
    while(~scanf("%d",&n)&&n){
        int flag=0;
        for(int i=0;i<45;i++){
            if(fib[i]==n){
                flag=1;
                break;
            }
        }
        if(flag) printf("Second win\n");
        else printf("First win\n");
    }
    return 0;
}
