#include<stdio.h>
#include<iostream>
#include<sstream>
#include<string.h>
#include<iostream>
using namespace std;
int cha(int k)
{
    int sum=0;
    while(k)
    {
        sum+=(k%10);
        k/=10;
    }
    if(sum==10)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int k;
    scanf("%d",&k);
    int ans=19,i=0;
    while(i<k)
    {

        if(cha(ans))
        {
            i++;
        }
        ans+=9;
    }
    printf("%d\n",ans-9);
}
