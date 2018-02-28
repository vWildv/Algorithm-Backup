#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
#include<cstring>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;
int check(int t){
    if(t % 400 == 0){
        return 1;
    }
    else if(t % 4 == 0 && t % 100 != 0){
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        int ans = n + 1;
        int t = (365 + check(ans)) % 7;
        while(t != 0 || check(n) != check(ans)){
            ans ++;
            t = (t + 365 + check(ans)) % 7;
        }
        printf("%d\n",ans);
    }
    return 0;
}
