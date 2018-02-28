#include<bits/stdc++.h>
using namespace std;
const int MAX = 2e5 + 7;
int a[MAX];
int main()
{
    int n, flag = 1;
    while(cin >> n)
    {
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
        {
            if(a[i] < 0)
            {
                flag = 0;
                break;
            }
            if(a[i] & 1)
                a[i + 1] -= 1;
        }
        if(a[n] < 0)
            flag = 0;
        if(flag)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }

    return 0;
}
