#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int a[200005];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    int c=0;

    for(int i=n-1;i>=0;i--)
       {
           if(a[i]<0)
           {
               c=0;
               break;
           }
           if(i!=0)            {
                if(a[i]%2==1)
               {
                   a[i-1]-=1;
               }
           }
           else if(a[i]%2==0)
               c=1;
           else
               c=0;
       }
    if(c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
