#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
bool jug[10][10];
char pq[10][10];
int q[10];
int n,k,num;
void dfs(int x,int n1){

   if(n1==k){
        num++;
        return;
    }
    if(x>=n)
    return;
    for(int i=0;i<n;i++)
    {
        if(jug[x][i]&&q[i]==0)
        {
            q[i]=1;
            dfs(x+1,n1+1);
            q[i]=0;
        }
    }
    dfs(x+1,n1);
    return;
}
int main (){
  while (~scanf("%d%d",&n,&k)){
    memset(pq,0,sizeof(pq));
    memset(jug,0,sizeof(jug));
    memset(q,0,sizeof(q));
    getchar();
    if (n==-1){
        break;
    }
    num=0;
    for (int i=0;i<n;i++){
        scanf("%s",&pq[i]);
     }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if(pq[i][j]=='#'){
                jug[i][j]=1;
            }
        }
    }
     dfs(0,0);
     printf("%d\n",num);
  }
  return 0;
}