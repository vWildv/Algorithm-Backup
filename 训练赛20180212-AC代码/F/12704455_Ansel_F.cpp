#include<iostream>
using namespace std;
int main()
{
    long n,x;
    int temp;
    while(cin>>n>>x)
    {
        long sum=0;
        for(int i=1; i<=n; i++)
        {
            cin>>temp;
            sum+=temp;
        }
        if(sum+n-1==x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
