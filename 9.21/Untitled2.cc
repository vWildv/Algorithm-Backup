#include <bits/stdc++.h>
using namespace std;

const double eps=1e-8;
int cmp(double x){
    if(fabs(x)<eps) return 0;
    if(x>0) return 1;
    return -1;
}

struct point{
    double x,y;
    point() {}
    point(double a,double b):x(a),y(b){}
    friend point operator - (const point &a,const point &b){
        return point(a.x-b.x,a.y-b.y);
    }

    friend bool operator == (const point &a,const point &b){
        return cmp(a.x-b.x)==0&&cmp(a.y-b.y)==0;
    }
};

double det(const point &a,const point &b){
    return a.x*b.y-a.y*b.x;
}

double dot(const point &a,const point &b){
    return a.x * b.x + a.y * b.y;
}

struct polygon_convex{
    vector<point> p;
    polygon_convex(int Size=0){
        p.resize(Size);
    }
};

bool comp_less(const point &a,const point &b){
    return cmp(a.x-b.x)<0 || cmp(a.x-b.x)==0&&cmp(a.y-b.y)<0;
}

polygon_convex convex_hull(vector<point> a){
    polygon_convex res(2*a.size()+5);
    sort(a.begin(),a.end(),comp_less);
    a.erase(unique(a.begin(),a.end()),a.end());
    int m=0;
    for(int i=0;i<a.size();i++){
        while(m>1 && cmp(det(res.p[m-1]-res.p[m-2],a[i]-res.p[m-2]))<=0)
            --m;
        res.p[m++]=a[i];
    }
    int k=m;
    for(int i=int(a.size())-2;i>=0;i--){
        while(m>k && cmp(det(res.p[m-1]-res.p[m-2],a[i]-res.p[m-2]))<=0)
            --m;
        res.p[m++]=a[i];
    }
    res.p.resize(m);
    if(a.size()>1) res.p.resize(m-1);
    return res;
}

bool OnSegment( point p, point a1, point a2 ){
    return cmp( det(a1 - p, a2 - p) ) == 0 && cmp( dot( a1 - p, a2 - p ) ) < 0;
}

int ispointInPolygon( point p, vector<point> poly, int n ){
    int wn = 0;
    for( int i = 0; i < n; ++i ){
        point& p1 = poly[i], p2 = poly[ (i + 1)%n ];
        if ( p == p1 || p == p2 || OnSegment( p, p1, p2 ) ) return -1;
        int k = cmp( det( p2 - p1, p - p1 ) );
        int d1 = cmp( p1.y - p.y );
        int d2 = cmp( p2.y - p.y );
        if ( k > 0 && d1 <= 0 && d2 > 0 ) ++wn;
        if ( k < 0 && d2 <= 0 && d1 > 0 ) --wn;
    }
    if(wn) return 1;
    return 0;
}

bool SegmentProperIntersection( point a1, point a2, point b1, point b2 ){
    double c1 = det( a2 - a1, b1 - a1 ), c2 = det( a2 - a1, b2 - a1 ),
                c3 = det( b2 - b1, a1 - b1 ), c4 = det( b2 - b1, a2 - b1 );
    return cmp(c1)*cmp(c2) < 0 && cmp(c3) * cmp(c4) < 0;
}

bool checkConvexHullIntersection(vector<point> a,vector<point> b,int na,int nb){
    for(int i=0;i<na;++i)
         if (ispointInPolygon(a[i],b,nb)) return true;
    for(int i=0;i<nb;++i)
         if (ispointInPolygon(b[i],a,na)) return true;
    for(int i=0;i<na;++i )
         for (int j=0;j<nb;++j)
            if(SegmentProperIntersection(a[i],a[(i + 1)%na],b[j],b[(j + 1)%nb]))
                return true;
     return false;
}

vector<point> pa,pb;
polygon_convex ra,rb;

int main(){
    int n;
    while(~scanf("%d",&n)){
        point tmp;
        pa.clear(); pb.clear();
        ra.p.clear(); rb.p.clear();
        for(int i=0;i<n;i++){
            scanf("%lf%lf",&tmp.x,&tmp.y);
            pa.push_back(tmp);
        }
        for(int i=0;i<n;i++){
            scanf("%lf%lf",&tmp.x,&tmp.y);
            pb.push_back(tmp);
        }
        ra=convex_hull(pa);
        rb=convex_hull(pb);
        int f=checkConvexHullIntersection(ra.p,rb.p,ra.p.size(),rb.p.size());
        printf("%s\n",f?"False":"True");
    }
}
