#include<stdio.h>
#include<iostream>
#include<cstdio>
#include<string.h>
#include<math.h>
using namespace std;
int getresult(int m,int n)
{
    int sum1=0;int sum2=0;
    for(int i=m;i>m-n;i--)
    {
        int t1=i;
        while(t1%2==0)
        {
           // cout<<"t1="<<t1<<endl;
            sum1++;
            t1=t1/2;
        }
    }
    for(int j=n;j>=2;j--)
    {
        int t2=j;
        while(t2%2==0)
        {
            sum2++;
            t2/=2;
        }
    }
    return sum1-sum2;
}
int main()
{
    int m,n;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        cout<<getresult(m,n)<<endl;
    }
}
