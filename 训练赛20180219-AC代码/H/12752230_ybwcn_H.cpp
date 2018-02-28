#include<stdio.h>
#include<math.h>
bool pan(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0)return false;
    }
    return true;
}
int main(){
    int n;
    while(~scanf("%d",&n)){
        if(n%2==0){printf("2");n-=2;}
        else{printf("3");n-=3;}
        for(int i=2;i<n;i++){
            if(pan(i)==true&&pan(n-i)==true){
                printf(" %d %d\n",i,n-i);
                break;
            }
        }
    }
    return 0;
}
