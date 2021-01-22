# include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    scanf("%d%d",&n,&a);
    double d = (n-2)*180*1.0/n/(n-2);
    int l = (int)(a*1.0/d);
    if(!l) ++l;
    else if(l>=n-2) l = n-2;
    int ans = l+2;
    if(l!=n-2 && fabs(a-l*d)>fabs(a-(l+1)*d)) ++ans;
    printf("2 1 %d\n",ans);
    return 0;
}
