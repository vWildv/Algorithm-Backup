#include <bits/stdc++.h>
using namespace std;

int a[1000005];

int main(){
    int n;
    scanf("%d",&n);
    int tmp;
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++){
        a[i]=(sqrt(8.0*a[i]+1.0)-1)/2;
    }
    int res=1;
    for(int i=1;i<=n;i++){
        res^=a[i];
    }
    printf("%s\n",res==1?"YES":"NO");
}
