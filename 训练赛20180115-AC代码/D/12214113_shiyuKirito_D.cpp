#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<string>
using namespace std;
const int maxn=305;
bool qushizi(int n)
{
    int f[maxn];
    f[0]=1;
    f[1]=2;
    int sum=0;
    if(n==2)
    {
        return 0;
    }
   for(int i=2;i<300;i++)
   {
       f[i]=f[i-1]+f[i-2];
       if(f[i]>n)
       {
           return 1;
       }
       if(f[i]==n)
       {
           return 0;
       }
   }
}
int main ()
{
    int n;
    while(cin>>n&&n!=0)
    {
        if(qushizi(n))
        {
            cout<<"First win"<<endl;
        }
        else
        {
            cout<<"Second win"<<endl;
        }
    }
}
