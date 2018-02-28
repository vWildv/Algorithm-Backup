#include<stdio.h>
int main()
{
    long long int a;
    while(~scanf("%lld",&a)){
        int pan=0;
        if(a==0)break;
        long long int qian=2;long long int hou=3;
        long long int jie;long long k=1;
        while(qian<=a){
            if(qian==a){pan=1;break;}
            jie=qian+hou;
            qian=hou;hou=jie;
        }
        if(pan==0)printf("First win\n");
        else printf("Second win\n");
    }
    return 0;
}
