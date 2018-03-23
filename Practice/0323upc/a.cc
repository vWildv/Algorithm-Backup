#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int a[10005],vis[10005];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        vis[a[i]]=1;
    }
    int cnt=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<i;j++)
            if(a[i]+a[j]<=10000&&vis[a[i]+a[j]]) vis[a[i]+a[j]]=0,cnt++;
    printf("%d\n",cnt);
}