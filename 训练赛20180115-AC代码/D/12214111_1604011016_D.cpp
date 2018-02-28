#include<stdio.h>
    int a,b;
    int main(){
        int n,ts;
        int z;
        while(~scanf("%d",&n))
        {
            if(n==0) break;
            a = 2,b = 3;
            z = 1;
            while(a<=n){
                if(a==n || b==n){
                    z = 0;
                    break;
                }
                ts = (a  + b);
                a = b;
                b = ts;
            }
            if(z==0) printf("Second win\n");
            else printf("First win\n");
        }
        return 0;
    }
