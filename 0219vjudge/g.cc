#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int sum=0,ans=0,tmp;
    for(int i=1;i<=n;i++){
        sum+=k;
        if(sum%10>5){
            ans+=sum*9/10;
            tmp=sum*9%10;
            sum=0;
        }
    }
    ans+=sum*9/10;
    tmp=sum*9%10;
    if(tmp>=5) ans++;
    printf("%d\n",ans);
}
