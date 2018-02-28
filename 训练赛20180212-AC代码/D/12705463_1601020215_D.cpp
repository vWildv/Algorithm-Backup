#include<bits/stdc++.h>
using namespace std;
bool judge(int x){
    int sum=0;
    while(x){
        sum+=x%10;
        x/=10;
    }
    if(sum==10)
        return 1;
    else
        return 0;
}
int main()
{
    long long n,num[1000000],x=0;
    for(long long i=0;i<=100000000;i++)
        if(judge(i))
            num[x++]=i;
    cin>>n;
    cout<<num[n-1]<<endl;
}
