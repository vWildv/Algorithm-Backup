#include <bits/stdc++.h>
using namespace std;

int a[200005];
set<int> s;
int main(){
    int n,m,k,aa;
    scanf("%d%d%d%d",&n,&k,&aa,&m);
    for(int i=1;i<=m;i++){
        scanf("%d",&a[i]);
    }
    s.insert(0); s.insert(n+1);
    set<int>::iterator it;
    aa++;
    int res=(n+1)/aa;
    for(int i=1;i<=m;i++){
        it=s.lower_bound(a[i]);
        int r=*it; it--;
        int l=*it;
        int cnt=(r-l)/aa;
        int tmp1=max(0,(a[i]-l)/aa);
        int tmp2=max(0,(r-a[i])/aa);
        //printf("-- %d %d\n",tmp1,tmp2);
        res-=(cnt-tmp1-tmp2);
        if(res<k){
            printf("%d\n",i);
            return 0;
        }
        s.insert(a[i]);
    }
    printf("-1\n");
}
