#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
#include<cstring>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;
int p[50005],ans;

int check(int x)
{
   int r = x;
   while (p[r] != r){
       r = p[r];
   }

   int i = x; int j;
   while(i != r){
       j = p[i];
       p[i] = r;
       i = j;
   }
   return r;
}

void offer(int x,int y)
{
    int xx = check(x);
    int yy = check(y);
    if(xx != yy)
    {
        p[yy] = xx;
        ans --;
    }
}


int main()
{
    int T,n,m;
    scanf("%d",&T);
    while(T --)
    {
        scanf("%d%d",&n,&m);
        ans = n;
        for(int i = 1;i <= n;i ++){p[i] = i;}
        for(int i = 1;i <= m;i ++){
            int x,y;
            scanf("%d%d",&x,&y);
            offer(x,y);
        }
        printf("%d\n",ans);
    }
   return 0;
}
