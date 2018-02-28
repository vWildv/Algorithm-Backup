#include<iostream>
#include<cstdio>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{ int n;
  int a[30005];
  while(cin >> n)
  {int i,x,l = 0;
      while(n --)
      {cin >> x;
         for(i = 0;i < l;i ++)
         {if(a[i] >= x){a[i] = x;break;}

         }
         if(i == l)
         {
             a[l ++] = x;
         }
      }
    cout<<l<<endl;

  }
}
