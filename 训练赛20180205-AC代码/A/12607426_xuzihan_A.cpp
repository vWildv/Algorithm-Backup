/*	HDU 3333 Turning Tree
	1st Edition:2018.2.4 Sunday
	Algorithm:莫队,离散化
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <queue>
#include <deque>
#include <stack>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

#define is_lower(c) (c>='a' && c<='z')
#define is_upper(c) (c>='A' && c<='Z')
#define is_alpha(c) (is_lower(c) || is_upper(c))
#define is_digit(c) (c>='0' && c<='9')
#define stop system("PAUSE")
#define ForG(a,b,c) for(rg int (a)=c.head[b];(a);(a)=c.E[a].nxt)
#define For(a,b,c) for(rg int (a)=(b);(a)<=(c);++a)
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define shl(x,y) ((x)<<(y))
#define shr(x,y) ((x)>>(y))
#define mp make_pair
#define pb push_back
#define rg register
#define hash rename_hash
#define next rename_next
#define prev rename_prev
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef double db;
const ll inf=1000000007LL;
const double EPS=1e-10;
const ll inf_ll=(ll)1e18;
const ll maxn=30005LL;
const ll maxm=100005LL;
const ll mod=1000000007LL;

const ll b_size=200LL;

int n,m;
int a[maxn];
int cnt[maxn];
vi hash;
int l[maxm],r[maxm],order[maxm];
ll ans[maxm];

int cmp(int x,int y){
	return ((l[x]/b_size)^(l[y]/b_size)?l[x]/b_size<l[y]/b_size:r[x]<r[y]);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		hash.clear();memset(cnt,0,sizeof(cnt));
		For(i,1,n) scanf("%d",a+i),hash.pb(a[i]);
		
		sort(hash.begin(),hash.end());
		hash.erase(unique(hash.begin(),hash.end()),hash.end());
		For(i,1,n) a[i]=lower_bound(hash.begin(),hash.end(),a[i])-hash.begin();
		
		scanf("%d",&m);
		For(i,1,m){
			scanf("%d%d",l+i,r+i);
			order[i]=i;
		}
		sort(order+1,order+m+1,cmp);
		
		ll nl=1,nr=0;
		
		ll res=0;
		For(i,1,m){
			int ll=l[order[i]],rr=r[order[i]];
			while(nr<rr){
				++nr;
				if(!cnt[a[nr]]) res+=hash[a[nr]];
				++cnt[a[nr]];
			}
			while(nl>ll){
				--nl;
				if(!cnt[a[nl]]) res+=hash[a[nl]];
				++cnt[a[nl]];
			}
			while(nr>rr){
				if(cnt[a[nr]]==1) res-=hash[a[nr]];
				--cnt[a[nr--]];
			}
			while(nl<ll){
				if(cnt[a[nl]]==1) res-=hash[a[nl]];
				--cnt[a[nl++]];
			}
			ans[order[i]]=res;
		}
		For(i,1,m) printf("%lld\n",ans[i]);
	}
	return 0;
}