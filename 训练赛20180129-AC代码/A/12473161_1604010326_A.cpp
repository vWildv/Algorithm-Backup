#include<stdio.h>
int run(int t)
{
      if(t%400==0||(t%4==0&&t%100!=0))return 1;
      return 0;
}
int main()
{
    int t;
    while(~scanf("%d",&t))
    {
        int sum=0,i,tt=0;
        if(run(t))tt=1;
        for( i=t;;i++)
        {
            if(run(i))sum+=2;
            else sum+=1;
            if(sum%7==0&&run(i+1)==tt)break;
        }
          printf("%d\n",i+1);
    }
}
