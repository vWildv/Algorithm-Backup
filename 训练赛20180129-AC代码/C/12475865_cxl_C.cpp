#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,a,b;
    while(cin >> n >> a >> b)
    {
        if(b > 0)
        {
        int ans = (a + b) % n;
        if (ans == 0) ans = n;
        cout << ans << endl;
        }
        else
        {
            b = abs(b) % n;
            if (b == 0)
                b = n;
            if (a > b)
            {
                cout << (a - b) << endl;
            }
            else
            {
                cout << n - (b - a)<< endl;
            }
        }
    }return 0;
}
