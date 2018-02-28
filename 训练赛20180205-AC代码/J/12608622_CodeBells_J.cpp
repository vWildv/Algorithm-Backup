#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<queue>
#include<iostream>
using namespace std;
#define maxn 105

int n,m;
int visit[maxn][maxn],que[maxn];
void judge()
{
    int i,j,count=0;
    queue <int> q;
    for(i=0;i<n;i++){
        if(que[i]==0)
            q.push(i);
    }
    while(!q.empty()){
        int tmp=q.front();
        q.pop();
        count++;
        for(i=0;i<n;i++){
            if(visit[tmp][i]==1){
                if(--que[i]==0){
                    q.push(i);
                }
            }
        }
    }
    if(count!=n) printf("NO\n");
    else printf("YES\n");
}
int main()
{
    int i,a,b;
    while (scanf("%d%d",&n,&m),n+m){
        memset(visit,0,sizeof(visit));
        memset(que,0,sizeof(que));
        for(i=0;i<m;i++){
            scanf("%d%d",&a,&b);
            if(!visit[a][b]){
                visit[a][b]=1;
                que[b]++;
            }
        }
        judge();
    }
    return 0;
}
