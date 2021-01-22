#include <bits/stdc++.h>
using namespace std;

const double pi=acos(-1);
double p[4][4],y[4][4],r[4][4];
const double eps=1e-3;

void init(double delta,int f){
    if(f==1){
        p[0][0]=1;
        p[1][1]=cos(delta);
        p[1][2]=-sin(delta);
        p[2][1]=sin(delta);
        p[2][2]=cos(delta);
    }
    else if(f==2){
        y[1][1]=1;
        y[0][0]=cos(delta);
        y[0][2]=sin(delta);
        y[2][0]=-sin(delta);
        y[2][2]=cos(delta);
    }
    else{
        r[2][2]=1;
        r[0][0]=cos(delta);
        r[1][0]=sin(delta);
        r[0][1]=-sin(delta);
        r[1][1]=cos(delta);
    }
}

double ans[4][4],res[4][4];

void mul(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            res[i][j]=0.0;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                res[i][j]+=p[i][k]*y[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                ans[i][j]+=res[i][k]*r[k][j];
            }
        }
    }
}

int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    a=(-a/180.0)*pi;
    b=(b/180.0)*pi;
    c=(c/180.0)*pi;
    init(a,1);
    init(b,2);
    init(c,3);
    mul();
    double r1=-ans[0][2];
    double r2=ans[1][2];
    double r3=ans[2][2];
    if(fabs(r1)-eps<=0) r1=0;
    if(fabs(r2)-eps<=0) r2=0;
    if(fabs(r3)-eps<=0) r3=0;
    printf("%.3f %.3f %.3f\n",r1,r2,r3);
    r1=-ans[0][1];
    r2=ans[1][1];
    r3=ans[2][1];
    if(fabs(r1)-eps<=0) r1=0;
    if(fabs(r2)-eps<=0) r2=0;
    if(fabs(r3)-eps<=0) r3=0;
    printf("%.3f %.3f %.3f\n",r1,r2,r3);
}
