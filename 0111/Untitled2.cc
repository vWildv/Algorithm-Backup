#include <bits/stdc++.h>
using namespace std;

const double pi=acos(-1.0);

inline double sqr(double x){
    return x*x;
}

struct point{
    double x,y;
    point(){}
    point(double a,double b):x(a),y(b){}
    void input(){
        scanf("%lf%lf",&x,&y);
    }
    friend point operator - (const point &a,const point &b){
        return point (a.x-b.x,a.y-b.y);
    }
    double norm(){
        return sqrt(sqr(x)+sqr(y));
    }
};

const double eps=1e-8;

int cmp(double x){
    if(fabs(x)<eps) return 0;
    if(x>0) return 1;
    return -1;
}

double det(const point &a,const point &b){
    return a.x*b.y-a.y*b.x;
}
double dot(const point &a,const point &b){
    return a.x*b.x+b.y*a.y;
}

double dist(const point &a,const point &b){
    return (a-b).norm();
}

double dis_point_segment(const point p,const point s,const point t){
    if(cmp(dot(p-s,t-s))<0) return (p-s).norm();
    if(cmp(dot(p-t,s-t))<0) return (p-t).norm();
    return fabs(det(s-p,t-p)/dist(s,t));
}

point p[100005];

int main(){
    int n;
    scanf("%d",&n);
    point O;
    O.input();
    double mini=0x3f3f3f3f; double maxn=-1;
    for(int i=0;i<n;i++){
        p[i].input();
    }
    for(int i=0;i<n;i++){
        mini=min(mini,dis_point_segment(O,p[i],p[(i+1)%n]));
        maxn=max(maxn,dist(O,p[i]));
    }
    printf("%.6f\n",sqr(maxn)*pi-sqr(mini)*pi);
}
