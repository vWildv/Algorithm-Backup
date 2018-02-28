#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
const int maxn = 2e5 + 10;
const int mod = 1e4 + 7;
int dp[maxn];
char s[maxn];
int _next[maxn];
void get__next(){
  memset(dp,0,sizeof(dp));
  int len = strlen(s);
  _next[0] = -1;
  int i = 0 , j = -1;
  while(i <= len){
      while(j!=-1&&s[i]!=s[j]) j = _next[j];
      _next[++i] = ++j;
  }
}
void calc(){
    int ans = 0;
   int len = strlen(s);
   for(int i = 1 ; i <= len;i++){
     int j = i;
     dp[i] = 1;
     dp[i] += dp[_next[i]];
     dp[i]%=mod;
     ans += dp[i];
     ans %= mod;
     ans%=mod;
   }
   printf("%d\n",ans);
}
// aabaa
//-10
int main()
{
  int  t , n;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
   scanf("%s",s);
    get__next();
    calc();
  }
}
