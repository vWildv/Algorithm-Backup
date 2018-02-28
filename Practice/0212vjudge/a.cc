#include <map>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,a,sum=0,flag=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a==0){
            if(sum%2){
                flag=0;
                break;
            }
            sum=0;
        }
        sum+=a;
    }
    if(sum%2) flag=0;
    flag?printf("YES\n"):printf("NO\n");
}