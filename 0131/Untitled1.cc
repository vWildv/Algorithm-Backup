#include <bits/stdc++.h>
using namespace std;

long long a[2005][2005];
map<int,long long> k1;
map<int,long long> k2;

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%lld",&a[i][j]);
            k1[i+j]+=a[i][j];
            k2[i-j]+=a[i][j];
        }
    }
    int px,py,qx,qy; long long max1=-1,max2=-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            long long v=k1[i+j]+k2[i-j]-a[i][j];
            if((i+j)%2){
                if(v>max1) max1=v,px=i,py=j;
            }
            else{
                if(v>max2) max2=v,qx=i,qy=j;
            }
        }
    }
    printf("%lld\n",max1+max2);
    printf("%d %d %d %d\n",px,py,qx,qy);
}
