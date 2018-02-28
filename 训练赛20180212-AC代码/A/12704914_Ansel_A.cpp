#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[2000005];
    while(~scanf("%d",&n))
    {
        int f=0;
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]<0)
            {
                f=0;
                break;
            }
            if(i!=0)
            {
                if(a[i]%2==1)
                    a[i-1]-=1;
            }
            else if(a[i]%2==0)
                f=1;
            else
                f=0;
        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
