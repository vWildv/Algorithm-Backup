#include <bits/stdc++.h>
using namespace std;

int y[1005];
int n;

int check(double k1){
    int pos=0;
    for(int i=2;i<=n;i++){
        if(1.0*(y[i]-y[1])/(i-1)!=k1){
            if(pos){
                if(1.0*(y[i]-y[pos])/(i-pos)!=k1){
                    //printf("%d %d %lf\n",y[i],y[pos],k1);
                    return 0;
                }
            }
            else pos=i;
        }
    }
    return pos?1:0;
}

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&y[i]);
    }
    double k1=(y[2]-y[1]);
    double k2=1.0*(y[3]-y[1])/2;
    double k3=(y[3]-y[2]);
    printf("%s\n",(check(k1)||check(k2)||check(k3))?"Yes":"No");
}
