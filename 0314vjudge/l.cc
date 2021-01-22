#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int a[100005];

int main(){
    int n;
    scanf("%d",&n);
    int maxn=-1,flag=0,cnt=-1;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>maxn){
            maxn=a[i];
            flag=0;
            cnt=i+1;
        }
        else if(a[i]==maxn) flag=1;
    }
    printf("%d\n",flag?-1:cnt);
}