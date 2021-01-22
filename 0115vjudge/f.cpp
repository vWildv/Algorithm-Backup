#include <stdio.h>
#include <algorithm>
#include <queue>
using namespace std;

char map[205][205];
int beginx,beginy;
int endx,endy;
int w,h;

int mx[4]={0,0,1,-1};
int my[4]={1,-1,0,0};

struct node{
    int x,y,stp;
    bool friend operator<(node x,node y){
        return x.stp>y.stp;
    }
}a,b;

int bfs(){
    priority_queue<node> move;
    a.x=beginx;
    a.y=beginy;
    a.stp=0;
    map[beginx][beginy]='#';
    move.push(a);
    while (!move.empty()){
        a=move.top();
        move.pop();
        if (a.x==endx && a.y==endy) return a.stp;
        for (int i=0;i<=3;i++){
            b.x=a.x+mx[i];
            b.y=a.y+my[i];
            if (b.x<0||b.x>=h||b.y<0||b.y>=w||map[b.x][b.y]=='#') continue;
            b.stp=a.stp;
            if (map[b.x][b.y]=='.'||map[b.x][b.y]=='W') b.stp++;
            else b.stp+=map[b.x][b.y]-'0'+1;
            map[b.x][b.y]='#';
            move.push(b);
        }
    }
    return -1;
}
int main(){
    int n;
    int ans;
    scanf ("%d",&n);
    while (n--){
        scanf ("%d%d",&h,&w);
        for (int i=0;i<h;i++){
            scanf ("%s",map[i]);
            for (int j=0;j<w;j++){
                if (map[i][j]=='Z'){
                    beginx=i;
                    beginy=j;
                }
                else if (map[i][j]=='W'){
                    endx=i;
                    endy=j;
                }
            }
        }
        ans=bfs();
        if (ans==-1) printf ("IMPOSSIBLE\n");
        else printf ("%d\n",ans);
    }
    return 0;
}
