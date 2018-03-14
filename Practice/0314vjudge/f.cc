#include <cmath>
#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    int x=a-b,flag=0;
    if(((c/a)*100)>=70.0) flag=1,printf("0\n");
    else{
        for(int i=1;i<=x;i++)
            if(((c+i)/a*100)>=70){
                flag=1;
                printf("%d\n",i);
                break;
            }
    }
    if(!flag) printf("-1\n");
    int ans=(x+c)/a*100;
    printf("%d\n",ans);
}