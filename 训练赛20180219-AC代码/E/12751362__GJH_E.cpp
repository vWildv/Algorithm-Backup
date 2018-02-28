#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,g;
    cin>>r>>g;
    if (r==0 && g==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if (r==g || r==g+1 || r+1==g)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
