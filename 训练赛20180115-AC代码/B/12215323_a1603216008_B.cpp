#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
#include<iostream>
#include<math.h>
#include<queue>
using namespace std;
int p[50005];

int check(int x){
    while(x != p[x]){
        int t = x;
        x = p[x];
        p[t] = p[x];
    }
    return x;
}

void offer(int x,int y){
    int xx = check(x);
    int yy = check(y);
    if(xx != yy){
        p[xx] = yy;
    }
}

int main(){
    int n,m;
    while(scanf("%d%d",&n,&m) != EOF){
        for(int i = 0;i < n;i ++){
            p[i] = i;
        }
        for(int i = 0;i < m;i ++){
            int t1,t2;
            scanf("%d%d",&t1,&t2);
            offer(t1,t2);
        }
        int infect = check(0);
        int ans = 0;
        for(int i = 0;i < n;i ++){
            if(check(i) == infect){
                ans ++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
