#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

ll a[100005];

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        a[i]+=a[i-1];
    }
    while(m--){
        int l,r;
        scanf("%d%d",&l,&r);
        ll tmp=a[r]-a[l-1];
        printf("%s\n",tmp%2==0?"Sim":"Nao");
    }
}