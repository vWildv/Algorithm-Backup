#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int num,i;
    while(cin>>num)
    {
        int a[num+1];
        for(i=1; i<=num; i++)
            cin>>a[i];
        for(i=1; i<num; i++)
        {
            if(a[i]%2==1)
                a[i]-=1,a[i+1]-=1;
        }
        bool judge=true;
        for(i=1; i<=num; i++)
            if(a[i]%2==1||a[i]<0)
            {
                judge=false;
                break;
            }
        if(judge)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

