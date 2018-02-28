#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b;
    while(~scanf("%d%d",&a,&b))
    {
        if(abs(a-b)>=2||a==0&&b==0)
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
}
