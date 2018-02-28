#include <stdio.h>

int cnt;
int countzero(int a,int b){
    int l=0,r=0;
    for(int i=a;i>=(a-b+1);i--){
        int tmp=i;
        while(tmp%2==0){
            l ++;
            tmp/=2;
        }
    }
    for(int i=b;i>=1;i--){
        int tmp=i;
        while(tmp%2==0){
            r ++;
            tmp/=2;
        }
    }
    return (l-r);
}

int main(int argc, char const *argv[]) {
    scanf("%d",&cnt);
    while(cnt--){
        int m,n;
        scanf("%d%d",&m,&n);
        printf("%d\n",countzero(m,n));
    }
    return 0;
}
