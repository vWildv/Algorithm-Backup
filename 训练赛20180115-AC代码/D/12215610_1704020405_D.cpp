#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{  int n;
   int a[80];
   while(cin >> n)
   {if(n == 0)break;
   int i;
   a[0] = 1;
   a[1] = 1;
   for(i = 2;i < 80;i ++)
      a[i] = a[i - 1] + a[i - 2];
   for(i = 0;i < 80;i ++)
      if(n == a[i])break;
   if(i != 80)cout<<"Second win"<<endl;
   else cout<<"First win"<<endl;
   }
}
