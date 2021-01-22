#include <vector>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> a[200005];
int v[200005];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        int x,y;
        scanf("%d%d",&x,&y);
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(int i=1;i<=n;i++) scanf("%d",&v[i]);
    int maxn=-1,ans=0;
    for(int i=1;i<=n;i++){
        int len=a[i].size();
        int q=0,p=0,max1=-1005,max2=-1005;
        if(len>1){
            for(int j=0;j<len;j++){
                int tmp=a[i][j];
                p=(p+v[tmp])%10007;
                q=(q+v[tmp]*v[tmp])%10007;
                if(v[tmp]>=max1) max2=max1,max1=v[tmp];
                if(v[tmp]<max1&&v[tmp]>=max2) max2=v[tmp];
                ans=(ans+p*p-q)%10007;
                maxn=max(max1*max2,maxn);
            }
        }
    }
    printf("%d %d\n",maxn,ans);
}
