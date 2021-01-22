#include <bits/stdc++.h>
using namespace std;

struct point{
    double x,y;
    point(){}
    point(double a,double b):x(a),y(b){}
    void input(){
        scanf("%lf%lf",&x,&y);
    }
    friend point operator - (const point &a,const point &b){
        return point(a.x-b.x,a.y-b.y);
    }
};

struct line{
    point a,b;
    line() {}
    line(point x,point y):a(x),b(y){}
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

line point_make_line(const point a,const point b){
    return line(a,b);
}

bool parallel(line a,line b){
    return !cmp(det(a.a-a.b,b.a-b.b));
}

bool line_make_point(line a,line b){
    point res;
    if(parallel(a,b)) return false;
    //double s1=det(a.a-b.a,b.b-b.a);
    //double s2=det(a.b-b.a,b.b-b.a);
    //res=(s1*a.b)
    return true;
}

double tmp[100005];
line l[100005];
point px[100005],py[100005];

int main(){
    int n;
    scanf("%d",&n);
    //double tmp;
    for(int i=1;i<=n;i++){
        scanf("%lf",&tmp[i]);
        //px[i].x=tmp; px[i].y=0.0;
    }
    sort(tmp+1,tmp+n+1);
    for(int i=1;i<=n;i++){
        px[i].x=tmp[i];
        px[i].y=0.0;
    }
    for(int i=1;i<=n;i++){
        scanf("%lf",&tmp[i]);
        //py[i].y=tmp; py[i].x=0.0;
    }
    sort(tmp+1,tmp+1+n);
    for(int i=1;i<=n;i++){
        py[i].y=tmp[i];
        py[i].x=0.0;
        l[i]=point_make_line(px[i],py[i]);
    }
    int q;
    scanf("%d",&q);
    while(q--){
        point o,p;
        o.x=0.0; o.y=0.0;
        p.input();
        //line pp=point_make_line(o,p);
        //int ans=0;
        //for(int i=1;i<=n;i++){
        //    if(line_make_point(pp,l[i])) ans++;
        //}
        int l=1,r=n;
        while(l<=r){
            int mid=(l+r)>>1;
            double k=py[mid].y/px[mid].x;
            double b=py[mid].y-k*p.x;
            if(b>=p.y) r=mid-1;
            else l=mid+1;
        }
        printf("%d\n",r);
    }
}

