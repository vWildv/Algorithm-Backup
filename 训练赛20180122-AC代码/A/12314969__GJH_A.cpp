#include <iostream>
#include <cstring>
using namespace std;
int fa[10000];
bool key[10000];
int findfather(int k)
{
    int i;
    for (i=k;i!=fa[i];i=fa[i]);
    return i;
}
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int n,m;
        cin>>n>>m;
        memset(key,0,sizeof(key));
        for (int i=1;i<=n;i++)
            fa[i]=i;
        for (int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            if (findfather(a)<findfather(b)) fa[findfather(b)]=findfather(a);
            if (findfather(a)>findfather(b)) fa[findfather(a)]=findfather(b);
        }

        for (int i=1;i<=n;i++)
            key[findfather(i)]=1;

        int sum=0;
        for (int i=1;i<=n;i++)
            if(key[i])sum++;
        cout<<sum<<endl;
    }
}
