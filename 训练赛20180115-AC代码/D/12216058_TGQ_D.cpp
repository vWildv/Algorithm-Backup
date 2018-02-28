#include<stdio.h>
int fb[50];
int main(){
    fb[0]=1;fb[1]=2;
    for(int i=2;i<45;i++)
        fb[i]=fb[i-1]+fb[i-2];
    int n;
    while(scanf("%d",&n)!=EOF&&n){
        int i=0;
        for(i=0;i<45;i++)
            if(fb[i]==n)
                break;
        if(i<45)
            puts("Second win");
        else
            puts("First win");
    }
    return 0;
}
