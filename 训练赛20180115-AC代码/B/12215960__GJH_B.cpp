#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;
int father[50005];

int findfather(int x)
{
    int i;
    queue<int> que;
    for (i=x; i!=father[i]; i=father[i])
        que.push(i);

    while (que.size())
    {
        father[que.front()]=i;
        que.pop();
    }
    return i;
}

int main()
{
    int n,m;
    cin>>n>>m;
    for (int i=0; i<n; i++)
        father[i]=i;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        if(findfather(a)>findfather(b)) father[findfather(a)] = findfather(b);
        else father[findfather(b)] = findfather(a);
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
        if(findfather(i)==0) ans++;
    cout<<ans<<endl;
}
