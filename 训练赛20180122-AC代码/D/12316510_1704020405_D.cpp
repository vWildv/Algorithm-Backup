#include<cstdio>
#include<cstring>
#include<map>
#include<iostream>
using namespace std;
int main()
{  int n,x;
   while(scanf("%d",&n) != EOF)
   {int bol = 0,i,s;
    for(i = 0;i < n;i ++)
    {scanf("%d",&x);
    if(bol == 0)
    {s = x;
     bol ++;}
     else if(s != x){bol --;
     if(bol == 0)s = x;}
     else bol ++;
    }
    printf("%d\n",s);
   }
}
