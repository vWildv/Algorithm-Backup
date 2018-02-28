#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,t,a,ans = 0;
  while(~scanf("%d%d",&n,&t)){
    
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        t =t-(86400-a);

        if ( t<=0 && ans==0 ) ans = i;
    }
    printf("%d",ans);
  }
    return 0;
}
