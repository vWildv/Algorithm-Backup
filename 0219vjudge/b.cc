#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

const int N=100005;
int a[N],l[N],r[N];

int main(){
    int t;  
    scanf("%d",&t);  
    while(t--){
        memset(l,0,sizeof(l));
        memset(r,0,sizeof(r));
        int n;  
        scanf("%d",&n);  
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        l[1]=a[1]; 
        r[n]=a[n];
        for(int i=2;i<=n;i++) l[i]=__gcd(l[i-1],a[i]);  
        for(int i=n-1;i>=1;i--) r[i]=__gcd(r[i+1],a[i]);  
        int ans=max(l[n-1],r[2]);
        for(int i=2; i<=n-1; i++) ans=max(ans,__gcd(l[i-1],r[i+1]));  
        printf("%d\n",ans);  
    }  
    return 0;  
} 