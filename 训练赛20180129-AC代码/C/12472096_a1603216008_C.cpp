#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
#include<cstring>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
    int n,a,b,p,q;
    while(scanf("%d%d%d",&n,&a,&b) != EOF){
        int t = (a + b) % n;
        if(t <= 0){
            t = t + n;
        }
        printf("%d\n",t);
    }
    return 0;
}
