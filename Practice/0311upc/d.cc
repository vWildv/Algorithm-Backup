#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int n,n2,r;

int mod(int a,int b){
    if(a<0&&a%b!=0){
        n=a/b+1;
        return a-(a/b+1)*b;
    }
    n=a/b;
    return a%b;
}

int main(){
    char a[20]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J'};
    vector<int> a2;
    scanf("%d%d",&n,&r);
    n2=n;
    while(n!=0) a2.push_back(mod(n,r));
    printf("%d=",n2);
    for(int i=a2.size()-1;i>=0;i--) cout<<a[a2[i]];
    printf("(base%d)\n",r);
    return 0;
}
