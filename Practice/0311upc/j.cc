#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

double d[100005],p[100005];

int main(){
    double d1,c,d2,p0,ans=0;
    int n;
    scanf("%lf%lf%lf%lf%d",&d1,&c,&d2,&p0,&n);
    d[0]=0,p[0]=p0;
    for(int i=1;i<n;i++) scanf("%d%d",&d[i],&p[i]);
    while(d1==0){
        double tmpd=c*p[0];
        int pos=upper_bound(d,d+n,tmpd)-d-1;
        int minpos=min_element(p,p+pos)-p;
        for(int i=0;i<=minpos;i++){
            double cnt=d[i]/d2;
            ans=p[i]*cnt;
            d1-=d[i];
        }
    }printf("%.2f\n",ans);
}