#include<stdio.h>
int arr[1005];
void init(int x) {
    for(int j=1; j<=x; j++)
        arr[j]=j;
}
int find(int x) {
    return x==arr[x]? x:find(arr[x]);
}
void combine(int x,int y) {
    int fx=find(x);
    int fy=find(y);
    if(fx!=fy)
        arr[fx]=fy;
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int n,m;
        scanf("%d%d",&n,&m);
        init(n);
        int a,b;
        while(m--) {
            scanf("%d%d",&a,&b);
            combine(a,b);
        }
        int ans=0;
        for(int j=1; j<=n; j++) {
            if(arr[j]==j)
                ans++;
        }
        printf("%d\n",ans);
    }
}
