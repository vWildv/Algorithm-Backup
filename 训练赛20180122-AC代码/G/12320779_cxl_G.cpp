//
//  main.cpp
//  dfs
//
//  Created by Mr chen on 2018/1/22.
//  Copyright © 2018年 Mr chen. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
using namespace std;
char map[10][10];
int vis[10];
int cnt;
int sum;
int n,k;
void dfs(int s)
{
    int i;
    if(cnt==k)
    {
        sum++;
        return ;
    }
    else{
        if(s>=n)
            return ;
        else{
            for(i=0;i<n;i++)
            {
                if(map[s][i]=='#'&&!vis[i])
                {
                    vis[i]=1;
                    cnt++;
                    dfs(s+1);
                    cnt--;
                    vis[i]=0;
                }
            }
            dfs(s+1);
        }
    }
}
int main()
{
    int i;
    while(~scanf("%d %d",&n,&k))
    {
        getchar();
        if(n==-1&&k==-1) break;
        memset(vis,0,sizeof(vis));
        for(i=0;i<n;i++)
            scanf("%s",map[i]);
        cnt=sum=0;
        dfs(0);
        printf("%d\n",sum);
    }
    return 0;
}
