#include<bits/stdc++.h>
using namespace std;
const int MAXN=1E6;

int main()
{
    std::ios::sync_with_stdio(false);
    int N;
    int a[MAXN];
    while(cin>>N){
        for(int i=1;i<=N;i++)
            cin>>a[i];
        sort(a+1,a+1+N);
        cout<<a[(N+1)/2]<<endl;
    }
    return 0;
}
