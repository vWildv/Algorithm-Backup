#include<bits/stdc++.h>
using namespace std;
int d[4][4]={{1,4,2,3},{3,2,4,1},{1,2,4,3},{4,3,2,1}};
int e[4][4]={{3,4,1,1},{2,2,3,4},{1,3,2,3},{4,1,4,2}};
struct Point{
    int x;
    int y;
};
struct Area{
    int lx,ly,rx,ry;
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
    int x1=a.lx,y1=a.ly;
    int x2=a.rx,y2=a.ry;
    if(p.x>=x1&&p.x<=x2&&p.y>=y1&&p.y<=y2) return true;
    return false;
}
int is_where(Point p,Area a){
    Point mid=(Point){a.lx+(a.rx-a.lx)/2,a.ly+(a.ry-a.ly)/2};
    if(is_on(p,(Area){a.lx,a.ly,mid.x,mid.y})) return 1;
    if(is_on(p,(Area){a.lx,mid.y+1,mid.x,a.ry})) return 2;
    if(is_on(p,(Area){mid.x+1,a.ly,a.rx,mid.y})) return 3;
    if(is_on(p,(Area){mid.x+1,mid.y+1,a.rx,a.ry})) return 4;
}
bool judge(Point p1,Point p2,Area a,int key){
    Point mid=(Point){a.lx+(a.rx-a.lx)/2,a.ly+(a.ry-a.ly)/2};
    //print(a);
    int v1=is_where(p1,a);
    int v2=is_where(p2,a);
    //cout<<v1<<" "<<v2<<" "<<key<<endl;
    //system("pause");
    if(v1!=v2){
        if(d[key-1][v1-1]<d[key-1][v2-1]) return true;
        else return false;
    }
    else{
        if(v1==1) judge(p1,p2,(Area){a.lx,a.ly,mid.x,mid.y},e[key-1][0]);
        else if(v1==2) judge(p1,p2,(Area){a.lx,mid.y+1,mid.x,a.ry},e[key-1][1]);
        else if(v1==3) judge(p1,p2,(Area){mid.x+1,a.ly,a.rx,mid.y},e[key-1][2]);
        else judge(p1,p2,(Area){mid.x+1,mid.y+1,a.rx,a.ry},e[key-1][3]);
    }
}
bool cmp(Point a,Point b){
    Area tmp=(Area){1,1,1<<k,1<<k};
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
    Area tmp=(Area){1,1,1<<k,1<<k};
    //cout<<judge(pp[0],pp[1],tmp,1)<<endl;
    sort(pp,pp+n,cmp);
    for(int i=0;i<n;i++){
        printf("%d %d\n",pp[i].x,pp[i].y);
    }
    return 0;
}
