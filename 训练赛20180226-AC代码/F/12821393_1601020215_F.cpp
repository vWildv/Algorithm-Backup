#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
typedef pair<int, int> ii;
const int MOD = 1000000007, MOD2 = 1000000009;
const int INF = 0x3f3f3f3f;
const lint BINF = 0x3f3f3f3f3f3f3f3fLL;

int x, n, m;

int solve()
{
    cin >> x >> n >> m;
    int ti = n * 60 + m;
    for(int i=0;; i++)
    {
        int h = ti / 60, m = ti % 60;
        if(h / 10 == 7 || h % 10 == 7 || m / 10 == 7 || m % 10 == 7)
            return cout << i << endl, 0;
        ti = (ti - x + 1440) % 1440;
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    // int t; cin >> t; while(t--)
    solve();
    // cout << (solve() ? "YES" : "NO") << endl;
    return 0;
}
