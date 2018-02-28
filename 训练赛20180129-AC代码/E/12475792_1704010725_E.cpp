#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int a[100005];
vector<int> ans;
int main(int argc, char const *argv[]) {
    int n,m;
    while(~scanf("%d%d",&n,&m)){
        memset(a,0,sizeof(a));
        ans.clear();
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        sort(a+1,a+1+n);
        int vol=1,cnt=1;
        while(m>=vol){
            if(vol==a[cnt]){
                cnt++;
                vol++;
                continue;
            }
            m-=vol;
            ans.push_back(vol);
            vol++;
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++) printf("%d ",ans[i]);
        printf("\n");
    }
    return 0;
}
