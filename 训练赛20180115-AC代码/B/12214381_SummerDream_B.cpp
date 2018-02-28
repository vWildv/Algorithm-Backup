#include<iostream>
#include<cstdio>
using namespace std;
int f[50005];
int sum;
int getfri(int num)
{
    if(f[num]==num)return num;
    else return f[num]=getfri(f[num]);
}
void judge(int a,int b)
{
    int t1=getfri(a);
    int t2=getfri(b);
    if(t1!=t2)
    {if(t1>t2)f[t1]=t2;
        else f[t2]=t1;}
}
main()
{
    int i;
    int m,n;
    while(cin>>m>>n)
    {
        sum=0;
        for(i=0;i<=m;i++)
            f[i]=i;
        int a,b;
        while(n--)
        {
            cin>>a>>b;
            judge(a,b);
        }
        for(i=0;i<m;i++)
            {
//                cout<<getfri(i)<<endl;
                if(getfri(i)==0)sum++;
            }
        cout<<sum<<endl;
    }
    return 0;
}
