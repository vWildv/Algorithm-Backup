#include <stack>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int bit[64];

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int x;
        scanf("%d",&x);
        int cnt=-1;
        for(int i=0;x;x/=2,i++){
            cnt++;
            bit[i]=x%2;
        }
        for(int i=cnt;i>=0;i--) printf("%d ",bit[i]);
        printf("\n");
    }
}