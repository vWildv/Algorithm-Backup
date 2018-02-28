#include<stdio.h>
using namespace std;
int main(){
    int n;int a,b;
    while(~scanf("%d",&n)){
        for(int i=0;i<=n;i++)scanf("%d%d",&a,&b);
        printf("%d",(n-4)/2);
    }
    return 0;
}
