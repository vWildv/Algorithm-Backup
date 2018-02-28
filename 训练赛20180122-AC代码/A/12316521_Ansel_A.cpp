#include<iostream>
#include<string>
using namespace std;
int a[1005];
int find(int n)
{
    if(a[n]==n)
        return a[n];
    else
        return a[n]=find(a[n]);
}
void unin(int c,int b)
{
    if(c>b)
        a[find(c)]=find(b);
    else
        a[find(b)]=find(c);
    return ;
}
int main()
{
    int t;
    int n,m,x,y;
    cin>>t;
    while(t--)
    {
        int ans=0;
        cin>>n>>m;
        for(int i=1; i<=n; i++)
            a[i]=i;
        for(int i=1; i<=m; i++)
        {
            cin>>x>>y;
            unin(x,y);
        }
        for(int i=1; i<=n; i++)
            if(i==a[i])
                ans++;
        cout<<ans<<endl;


    }
}
