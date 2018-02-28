#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<iomanip>
using namespace std;
int pos[100005][11];
int main()
{ int n,i,j,k;
  while(~scanf("%d",&n))
  {if(n == 0)break;
      memset(pos,0,sizeof(pos));
    int x,y,T = 0,Max = 0;
    while(n --)
    {scanf("%d%d",&x,&y);
     pos[y][x] ++;
     T = max(T,y);
    }
   for(i = T - 1;i >= 0;i --)
       for(j = 0;j <= 10;j ++)
   {if(j == 0)pos[i][j] += max(pos[i + 1][j],pos[i + 1][j + 1]);
   else if(j == 10)pos[i][j] += max(pos[i + 1][j],pos[i + 1][j - 1]);
   else pos[i][j] += max(max(pos[i + 1][j - 1],pos[i + 1][j]),pos[i + 1][j + 1]);
   }
    printf("%d\n",pos[0][5]);
  }

}
