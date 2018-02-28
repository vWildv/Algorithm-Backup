#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int r,g;
    while(cin >> r >> g)
    {
        if(r == 0 && g == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        if(r < g)
            swap(r,g);
        if(r - g < 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
