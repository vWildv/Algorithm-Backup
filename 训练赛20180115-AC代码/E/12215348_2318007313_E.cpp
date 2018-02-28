#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int jisuan(int n)
{
    int num,sum=0;
    for(int i=1;i<=n;i++)
    {
        int x=i;
        num=0;
        while(x!=0)
        {
            if(x%2==1)
            break;
            else
            {
                num++;
                x/=2;
            }
        }
        sum+=num;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        cout<<jisuan(m)-jisuan(m-n)-jisuan(n)<<endl;
    }
}
