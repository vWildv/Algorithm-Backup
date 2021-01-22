#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        for(int i=1;i<=a;i++){
            for(int j=1;j<=b;j++){
                if((i^j)<c){
                    printf("-xor: %d %d %d %d\n",i,j,i^j,c);
                }
                else if((i&j)>c){
                    printf("-and: %d %d %d %d\n",i,j,i&j,c);
                }
            }
        }
    }
}
