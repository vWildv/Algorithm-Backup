#include<stdio.h>
#include<math.h>
int  main() {
  int m,n;
  while(~scanf("%d%d",&m,&n))
  {
      if(m==0&&n==0)printf("NO\n");
      else 
      {
      if(fabs(m-n)<=1)
      {
          printf("YES\n");
      }
      else printf("NO\n");
      }
  }
}
