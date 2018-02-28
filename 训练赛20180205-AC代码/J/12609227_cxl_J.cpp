//
//  main.cpp
//  asd
//
//  Created by Mr chen on 2018/2/5.
//  Copyright © 2018年 Mr chen. All rights reserved.
//

#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;
#define M 510
int n,m;
int mp[M][M],du[M];
void topo()
{
    int i,j,count=0;
    queue <int> q;
    for(i=0;i<n;i++){
        if(du[i]==0)
            q.push(i);
    }
    while(!q.empty()){
        int tmp=q.front();
        q.pop();
        count++;
        for(i=0;i<n;i++){
            if(mp[tmp][i]==1){
                if(--du[i]==0){
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
        memset(mp,0,sizeof(mp));
        memset(du,0,sizeof(du));
        for(i=0;i<m;i++){
            scanf("%d%d",&a,&b);
            if(!mp[a][b]){
                mp[a][b]=1;
                du[b]++;
            }
        }
        topo();
    }
    return 0;
}  
