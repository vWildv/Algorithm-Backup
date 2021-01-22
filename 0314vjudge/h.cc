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
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) scanf("%d",&b[i]);
    for(int i=0;i<n;i++) scanf("%d",&c[i]);
    double x=0,y=0;
    for(int i=0;i<n;i++){
        x+=(a[i]-b[i])*(a[i]-b[i]);
        y+=(a[i]-c[i])*(a[i]-c[i]);
    }
    x=sqrt(x);
    y=sqrt(y);
    printf("%s\n",x>y?"MaratonIME":"Yan");
}