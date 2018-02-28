#include<cstdio>
#include<cstring>
#include<map>
#include<iostream>
using namespace std;
char map1[9][9];
bool map2[9];
int n,k,num,cnt;
void dfs(int x)
   {if(num == k)
       {cnt ++;
           return ;
       }
    if(x >= n)return ;
    int i,j;
    for(i = 0;i < n;i ++)
    {if(!map2[i] && map1[x][i] == '#')
        {map2[i] = true;
         num ++;
         dfs(x + 1);
         map2[i] = false;
         num --;

        }
    }
    dfs(x + 1);

   }
int main()
{
   while(cin >> n >> k)
   {   if(n == -1 && k == -1)break;
       int i,j;
      num = 0;
      cnt = 0;
   for(i = 0;i < n;i ++)
       for(j = 0;j < n;j ++)
          cin >> map1[i][j];
      memset(map2,0,sizeof(map2));
      dfs(0);
    cout<<cnt<<endl;
   }
}
