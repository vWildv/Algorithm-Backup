#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 10;
typedef long long ll;
//线段树没想到= = 莫队+离散化水过qwq
int tmp , cnt[maxn] , a[maxn] , d[maxn] ,n , k;
ll sum , ans[maxn];
struct node{
    int l , r , id;
}q[maxn];
bool cmp(node a,node b){
    return a.l/tmp!=b.l/tmp?a.l/tmp<b.l/tmp:a.r<b.r;
}

int get_id(int x){
    return lower_bound(d + 1 , d + 1 + k , x) -d;
}
void add(int pos){
   int val = a[pos];
   int id = get_id(val);
   if(cnt[id] == 0){
    sum+=(ll)val;
   }
   cnt[id]++;
}
void Remove(int pos){
    int val = a[pos];
    int id = get_id(val);
    cnt[id]--;
    if(cnt[id] == 0){
        sum-=(ll)val;
    }
}
int main()
{
    int t , n , m;
    scanf("%d",&t);
    while(t--){
        memset(cnt,0,sizeof(cnt));
        sum = 0;
        scanf("%d",&n);
        tmp = sqrt(n);
        for(int i = 1; i <= n;i++){
            scanf("%d",&a[i]);
            d[i] = a[i];
        }
        sort(d + 1 , d + 1 + n);
        k = unique(d + 1 , d + 1 + n) - d - 1;
        scanf("%d",&m);
        for(int i = 1; i <= m;i++){
               scanf("%d%d",&q[i].l,&q[i].r);
               q[i].id = i;
        }
        sort(q + 1 , q + 1 + m ,cmp);
         int L=q[1].l,R=L-1;
       for(int i=1;i<=m;i++){
           while(L>q[i].l)
                add(--L);
           while(L<q[i].l)
             Remove(L++);
         while(R>q[i].r)
             Remove(R--);
         while(R<q[i].r)
             add(++R);
         ans[q[i].id]=sum;
     }
     for(int i = 1; i <= m;i++){
        printf("%lld\n",ans[i]);
     }
    }
}
