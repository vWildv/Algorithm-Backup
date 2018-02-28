#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
int eryu(int x)
    {int num = 0;
     while(x % 2 == 0)
     {num ++;
     x /= 2;

     }
      return num;
    }
int main()
{  int t;
  cin >> t;
  while(t --)
  {int s = 0,m,n;
  cin >> m >> n;
   int i;
   for(i = m - n + 1;i <= m;i ++)
       s += eryu(i);
   for(i = 2;i <= n;i ++)
       s -= eryu(i);
   cout<<s<<endl;
  }

}
