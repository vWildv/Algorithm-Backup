#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int r, g;
    while(cin >> r >> g)
    {
        if(r==0&&g==0)
            cout << "NO" << endl;
        else if(abs(r-g) <= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
