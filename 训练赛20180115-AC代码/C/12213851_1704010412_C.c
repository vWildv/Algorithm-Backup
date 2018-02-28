#include<stdio.h>
int main()
{
 char a[100];
 int i,j,c;
 char b[]={"bkpstor"};
 while(~scanf("%s",&a))
 {
    c=0;
    j=0;
    for(i=0;a[i]!='\0';++i)
    {
     if (a[i]==b[0])
     {
      for(j=0;b[j]!='\0';j++)
      {
       if(a[i+j]!=b[j])
        break;
       else
        if(b[j+1]=='\0')
         c++;
      }
     }
    }if(c==0)
    printf("Safe\n",c);
   if(c>0)
      printf("Warning\n",c);
 }

}
