#include <bits/stdc++.h>
using namespace std;
bool check(int k)
{
    for (int i=2;i<=sqrt(k);i++)
        if (k%i==0) return 0;
    return 1;
}
int main()
{
    int n;
    cin>>n;
    if (n%2==0)
    {
        cout<<2<<" ";
        n-=2;
    }
    else
    {
        cout<<3<<" ";
        n-=3;
    }

    for (int i=2;i<n;i++)
    {
        if (check(i) && check(n-i))
        {
            cout<<i<<" "<<n-i<<endl;
            return 0;
        }
    }
}
