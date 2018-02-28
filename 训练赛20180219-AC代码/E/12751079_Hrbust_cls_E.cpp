#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<queue>
#include<map>
#define LL long long
using namespace std;
const int MAXN = 100010;
const int INF = 0x3f3f3f3f;

int abs(int a,int b)
{
    return a>b?a-b:b-a;
}

int main()
{
    ios::sync_with_stdio(false);
    int r,g;
    while(cin>>r>>g){
        if(abs(r,g)>=2||r==0&&g==0) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}

