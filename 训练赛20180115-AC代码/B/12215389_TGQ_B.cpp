#include <stdio.h>
#include <iostream>
using namespace std;
int a[50001];
int ak(int b)
{
    int c = b;
    while (c != a[c])
        c = a[c];
    int j = b;
    int t;
    while (a[j] != c)
    {
        t = a[j];
        a[j] = c;
        j = t;
    }
    return c;
}
void join(int x,int y)
{
    int fx,fy;
    fx=ak(x);
    fy=ak(y);
    if (fx!=fy)
        a[fx]=fy;
}
int main()
{
    int n, m, tn, t, t1, t2;
    int ans, root;
    while(cin >> n >> m) {
    for (int i = 0; i < n; i ++)
    {
        a[i]=i;
    }
    for (int i = 1; i <= m; i ++)
    {
        cin >> t1 >> t2;
        join(t1, t2);
    }
    root = ak(a[0]);
    ans = 0;
    for (int i = 0; i < n; i ++)
    {
        if (ak(a[i]) == root)
            ans ++;
    }
    cout << ans << endl;
}
  return 0;
}

