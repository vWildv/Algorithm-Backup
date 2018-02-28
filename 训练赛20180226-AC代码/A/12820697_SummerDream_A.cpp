#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
long long deal(long long m,long long n)
{
    if(n==1) return m;
    long long temp=deal(m,n/2)%100003;
    return (n%2==0 ? 1 : m)*temp*temp%100003;
}
int main()
{
    long long  num,people,i;
    while(cin>>num>>people)
    {
        long long  sum1=num;
        sum1=sum1*deal(num-1,people-1)%100003;
        long long sum2=1;
        sum2=deal(num,people)%100003;
        if((sum2-sum1)<0)
            cout<<sum2+100003-sum1<<endl;
        else cout<<sum2-sum1<<endl;

    }
}



