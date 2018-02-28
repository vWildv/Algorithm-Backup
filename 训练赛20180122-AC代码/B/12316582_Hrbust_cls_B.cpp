#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
const double EPS=1e-6;

struct Computer{
    double x,y;
    int fa;
    int ok;
}coms[1005];

int N;
double D;

bool check(Computer a,Computer b)
{
    double dis=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
    if(dis<D||fabs(dis-D)<EPS)
        return true;
    return false;
}

int Find(int no)
{
    if(coms[no].fa<0)
        return no;
    else
        return coms[no].fa=Find(coms[no].fa);
}

void Union(int rt1,int rt2)
{
    if(coms[rt1].fa<coms[rt2].fa){
        coms[rt1].fa+=coms[rt2].fa;
        coms[rt2].fa=rt1;
    }
    else{
        coms[rt2].fa+=coms[rt1].fa;
        coms[rt1].fa=rt2;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin>>N>>D;
    for(int i=1;i<=N;i++){
        cin>>coms[i].x>>coms[i].y;
        coms[i].fa=-1;
        coms[i].ok=0;
    }
    char op;
    while(cin>>op){
        if(op=='O'){
            int sc; cin>>sc;
            coms[sc].ok=1;
            for(int i=1;i<=N;i++){
                if(i==sc) continue;
                if(coms[i].ok&&check(coms[sc],coms[i])){
                    int r1=Find(sc);
                    int r2=Find(i);
                    if(r1!=r2) Union(r1,r2);
                }
            }
        }
        else{
            int c1,c2; cin>>c1>>c2;
            if(Find(c1)==Find(c2)) cout<<"SUCCESS"<<endl;
            else cout<<"FAIL"<<endl;
        }
    }
}
