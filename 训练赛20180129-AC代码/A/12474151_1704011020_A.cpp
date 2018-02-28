#include<stdio.h>
using namespace std;
 int p(int x){
      if(x%400==0||x%4==0&&x%100!=0){
          return 2;
      }
      else{
        return 1;
      }
 }
int main(){
   int n,a;
   while(scanf("%d",&n)!=EOF){
        a=n+1;
       int sum=0;
       if(n%400==0||n%4==0&&n%100!=0){
           sum+=2;
       }
       else {
        sum+=1;
       }
          for(int i=1;;i++){
                sum+=p(a++);
                     if(sum%7==0&&p(n)==p(a)){
                        break;
                     }
          }
          printf("%d\n",a);
   }
   return 0;
}
