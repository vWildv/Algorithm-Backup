#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int num,i,sum;
    while(cin>>num>>sum)
    {
        int a[num+1];
        long long sum2=0;
        for(i=1; i<=num; i++)
        {
            cin>>a[i];
            sum2+=a[i];
        }
        if(sum2+num-1==sum)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}

