#include<bits/stdc++.h>
#define ll int
using namespace std;
int d[4][4]={{1,4,2,3},{3,2,4,1},{1,2,4,3},{3,4,2,1}};
int e[4][4]={{3,4,1,1},{2,2,3,4},{1,3,2,3},{4,1,4,2}};
struct Point{
    ll x;
    ll y;
};
struct Area{
    ll lx,ly,rx,ry;
};
Point pp[1000005];
int n,k;
void print(Area a){
    cout<<a.lx<<" "<<a.ly<<" "<<a.rx<<" "<<a.ry<<endl;
}
void print1(Point p){
    cout<<p.x<<" "<<p.y<<endl;
}
bool is_on(Point p,Area a){
    if(p.x>=a.lx&&p.x<=a.rx&&p.y>=a.ly&&p.y<=a.ry) return true;
    return false;
}
int is_where(Point p,Area a){
    //Point mid=(Point){a.lx+(a.rx-a.lx)/2,a.ly+(a.ry-a.ly)/2};
    Point mid;
    mid.x=a.lx+(a.rx-a.lx)/2;
    mid.y=a.ly+(a.ry-a.ly)/2;
    Area tmp;
    tmp.lx=a.lx; tmp.ly=a.ly; tmp.rx=mid.x; tmp.ry=mid.y;
    if(is_on(p,tmp)) return 1;
    tmp.lx=a.lx; tmp.ly=mid.y+1; tmp.rx=mid.x; tmp.ry=a.ry;
    if(is_on(p,tmp)) return 2;
    tmp.lx=mid.x+1; tmp.ly=a.ly; tmp.rx=a.rx; tmp.ry=mid.y;
    if(is_on(p,tmp)) return 3;
    tmp.lx=mid.x+1; tmp.ly=mid.y+1; tmp.rx=a.rx; tmp.ry=a.ry;
    if(is_on(p,tmp)) return 4;
}
bool judge(Point p1,Point p2,Area a,int key){
    //Point mid=(Point){a.lx+(a.rx-a.lx)/2,a.ly+(a.ry-a.ly)/2};
    Point mid;
    mid.x=a.lx+(a.rx-a.lx)/2;
    mid.y=a.ly+(a.ry-a.ly)/2;
    int v1=is_where(p1,a);
    int v2=is_where(p2,a);
    if(v1!=v2){
        if(d[key-1][v1-1]<d[key-1][v2-1]) return true;
        else return false;
    }
    else{
        Area tmp;
        if(v1==1){
            tmp.lx=a.lx; tmp.ly=a.ly; tmp.rx=mid.x; tmp.ry=mid.y;
            judge(p1,p2,tmp,e[key-1][0]);
        }

        else if(v1==2){
            tmp.lx=a.lx; tmp.ly=mid.y+1; tmp.rx=mid.x; tmp.ry=a.ry;
            judge(p1,p2,tmp,e[key-1][1]);
        }
        else if(v1==3){
            tmp.lx=mid.x+1; tmp.ly=a.ly; tmp.rx=a.rx; tmp.ry=mid.y;
            judge(p1,p2,tmp,e[key-1][2]);
        }

        else{
            tmp.lx=mid.x+1; tmp.ly=mid.y+1; tmp.rx=a.rx; tmp.ry=a.ry;
            judge(p1,p2,tmp,e[key-1][3]);
        }
    }
}
bool cmp(Point a,Point b){
    //Area tmp=(Area){1,1,1<<k,1<<k};
    Area tmp;
    tmp.lx=1; tmp.ly=1; tmp.rx=(ll)(1LL<<k); tmp.ry=(ll)(1LL<<k);
    if(judge(a,b,tmp,1)){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d%d",&pp[i].x,&pp[i].y);
    }
    Area tmp;
    tmp.lx=1; tmp.ly=1; tmp.rx=(ll)(1LL<<k); tmp.ry=(ll)(1LL<<k);
    //cout<<judge((Point){1,3},(Point){1,4},tmp,1)<<endl;
    sort(pp,pp+n,cmp);
    for(int i=0;i<n;i++){
        printf("%d %d\n",pp[i].x,pp[i].y);
    }
    return 0;
}
