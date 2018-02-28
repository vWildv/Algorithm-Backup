#include <cstdio>
int cnt;
int count0(int a,int b){
    int fenm=0,fenz=0;
    for(int i=a;i>=(a-b+1);i--){
        int tmp=i;
        while(tmp%2==0){
            fenm ++;
            tmp/=2;
        }
    }
    
    for(int i=b;i>=1;i--){
        int tmp=i;
        while(tmp%2==0){
            fenz ++;
            tmp/=2;
        }
    }
    return (fenm-fenz);
}
int main() {
    scanf("%d",&cnt);
    while(cnt--){
        int m,n;
        scanf("%d%d",&m,&n);
        printf("%d\n",count0(m,n));
    }
    return 0;
}
