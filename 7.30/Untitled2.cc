#include <bits/stdc++.h>
using namespace std;

const int N=500005;
int a[N];
vector<int> b;

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++){
        if(b.size()==0){
            b.push_back(a[i]);
        }
        else{
            if(a[i]%k!=0) b.push_back(a[i]);
            else{
                int f=0;
                for(int j=0;j<b.size();j++){
                    if(b[j]==a[i]/k){
                        f=1;
                        break;
                    }
                }
                if(!f) b.push_back(a[i]);
            }
        }
    }
    printf("%d\n",b.size());
}
