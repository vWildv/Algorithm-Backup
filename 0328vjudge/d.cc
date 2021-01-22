#include <bits/stdc++.h>
using namespace std;

int main(){
    double n,a;
    scanf("%lf%lf",&n,&a);
    double min=999999999999999.9;
    int pos=0;
    double pice=(n-2.0)*180.0/n/(n-2.0);
    double tmp=0.0;
    for(int i=2;i<n;i++){
        double angle=(1.0*n-1.0*i)*pice;
        tmp=fabs(angle-1.0*a);
        //printf("%lf %lf %lf\n",angle,tmp,i);
        if(min>tmp){
            min=tmp;
            pos=i;
        }
    }
    printf("%.0lf 1 %d\n",n,pos);
}