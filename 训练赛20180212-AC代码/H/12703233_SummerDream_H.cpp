#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int day,time,i;
    while(cin>>day>>time)
    {
        int sum=0;
        int a[day+1];
        for(i=1; i<=day; i++)
            cin>>a[i];
        for(i=1; i<=day; i++)
        {
            sum+=(86400-a[i]);
            if(sum>=time)break;
        }
        cout<<i<<endl;
    }
    return 0;
}

