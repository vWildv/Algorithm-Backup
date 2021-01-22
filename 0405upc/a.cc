#include <stdio.h>

struct _point{
    double x,y;
};
struct _point a[1005],b[1005];

double dis(struct _point a,struct _point b){
    double ans=(a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
    return ans;
}

int main(){
    long long m,n;
    while(~scanf("%lld%lld",&m,&n)&&m&&n){
        getchar();
        int i,j;
        for (i = 1; i <= m; i++) {
            //getchar();
            //scanf("%lld",&a[i].x);
            //getchar();
            //scanf("%lld",&a[i].y);
            //getchar();
            //getchar();
            scanf("(%lf,%lf)%*c", &a[i].x, &a[i].y);
            //getchar();
        }
        for (i = 1; i <= n; i++) {
            //getchar();
            //scanf("%lld",&b[i].x);
            //getchar();
            //scanf("%lld",&b[i].y);
            //getchar();
            //getchar();
            scanf("(%lf,%lf)%*c", &b[i].x, &b[i].y);
            //getchar();
        }
        for(i=1;i<=n;i++){
            double tmp;
            int cnt=0;
            scanf("%lf",&tmp);
            for(j=1;j<=m;j++){
                if(dis(b[i],a[j])<=(tmp*tmp)){
                    cnt++;
                }
            }
            printf("%lld%c",cnt,(i!=n)?' ':'\n');
        }
    }
}
