#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define ll long long
int solve(int k)
{
    int ans=0,val,j;
    for(int i=1; i<=k; i++)
    {
        j=i;
        val=0;
        while(j)
        {
            if(j%2)break;
            else
            {

                val++;
                j/=2;
            }
        }
        ans+=val;
    }
    return ans;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&m,&n);
        int num1=solve(m);
        int num2=solve(m-n);
        int num3=solve(n);
        printf("%d\n",num1-(num2+num3));
    }
}
