#include <bits/stdc++.h>
using namespace std;
const int maxn=3e4+7;

int a[maxn],stk[maxn];

int main()
{
    int n;
    while(~scanf("%d",&n)){
        memset(stk,0x3f,sizeof(stk));
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        int top=0;
        for(int i=0;i<n;i++){
            bool ok=true;
            for(int j=0;j<top&&ok;j++){
                    if(a[i]<stk[j]){
                    stk[j]=a[i];
                    ok=false;
                }
            }
            if(ok){
                stk[top++]=a[i];
            }
        }
        printf("%d\n",top);
    }
    return 0;
}
