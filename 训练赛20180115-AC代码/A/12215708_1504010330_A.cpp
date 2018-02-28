#include<cstdio>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int n,ans=0;
char mapa[10][10];
bool check(int r,int c){

     for(int i=r;i>=0;i--){
        if(mapa[i][c]=='X') break;
        if(mapa[i][c]=='b'){
            return false;
        }
     }
     for(int i=c;i>=0;i--){
        if(mapa[r][i]=='X') break;
        if(mapa[r][i]=='b'){
            return false;
        }
     }
     return true;
}
void dfs(int pos,int num){
     if(pos>=n*n){
        if(num>ans) ans=num;
        return;
     }
      int r=pos/n,c=pos%n;
      if(check(r,c)&&mapa[r][c]=='.'){
        mapa[r][c]='b';
        dfs(pos+1,num+1);
        mapa[r][c]='.';
      }
      dfs(pos+1,num);
}
int main ()
{
    while(cin>>n,n){
        ans=0;
        memset(mapa,0,sizeof(mapa));
        for(int i=0;i<n;i++)
            cin>>mapa[i];
        dfs(0,0);
        cout<<ans<<endl;
    }
}
