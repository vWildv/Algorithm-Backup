#include<stdio.h>
using namespace std;
int main(){
   int n,a,b;

   while(scanf("%d%d%d",&n,&a,&b)!=EOF){
        int num=0,sum=0;
           num=b%n;

    sum=(n+a+num)%n;

    printf("%d\n",sum==0?n:sum);

   }
   return 0;
}
