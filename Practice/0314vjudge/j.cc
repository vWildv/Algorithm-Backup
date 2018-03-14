#include <cmath>
#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int a[100005],b[100005],c[100005];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d%d%d",&a[i],&b[i],&c[i]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            double dis=(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]);
            dis=sqrt(dis);
            if(dis<=(c[i]+c[j])) printf("%d %d\n",i+1,j+1);
        }
    }
}