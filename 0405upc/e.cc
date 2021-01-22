#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int a[N];

int check(int l,int mid){
    int cnt=1,pos=1;
    for(int i=2;i<=l;i++)
        if(a[i]-a[pos]>=mid){
            pos=i;
            cnt++;
        }
    return cnt;
}

int main(){
    int l,s;
    while(~scanf("%d%d",&l,&s)&&l&&s){
        for(int i=1;i<=l;i++) scanf("%d",&a[i]);
        sort(a+1,a+l+1);
        int le=1,r=a[l]-a[1],mid;
        while(le<r){
            mid=(le+r+1)>>1;
            if(check(l,mid)>=s) le=mid;
            else r=mid-1;
        }
        printf("%d\n",le);
    }
}

