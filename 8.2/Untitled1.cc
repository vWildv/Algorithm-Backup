#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
#define pii pair<int,int>

char mp[1505][1505];
int dv[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
pii pre[1505][1505];
int flag;
int n,m;

void dfs(int x,int y){
	int xx=x%n,yy=y%m;
	if(flag) return;
	if(mp[xx][yy]=='#'||pre[xx][yy]==make_pair(x,y)) return;
	if(pre[xx][yy]!=make_pair(0,0)){
		flag=1;
		return;
	}
	pre[xx][yy]=make_pair(x,y);
	for(int i=0;i<4;i++){
		dfs(x+dv[i][0],y+dv[i][1]);
	}
}

int main(){
    scanf("%d%d",&n,&m);
    int posx,posy;
    for(int i=0;i<n;i++){
        getchar();
        for(int j=0;j<m;j++){
            scanf("%c",&mp[i][j]);
            if(mp[i][j]=='S'){
                posx=i;
                posy=j;
            }
        }
    }
	dfs(posx+n*m,posy+n*m);
	if(flag) printf("Yes\n");
    else printf("No\n");
}

