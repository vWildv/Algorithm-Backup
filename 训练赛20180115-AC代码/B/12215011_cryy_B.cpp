#include<iostream>
using namespace std;
class man
{
public:
    int father;
    int find_father(int);
};
man ill[500002];
void start(void);
void find_sum(int);
int main(void)
{
    int m,n,a,b;
    ios::sync_with_stdio(false);
    while(cin>>m>>n)
    {
        start();
        while(n--)
        {
            cin>>a>>b;
            ill[a].find_father(a);
            ill[b].find_father(b);
            ill[ill[a].father].father=ill[b].find_father(b);
        }
        find_sum(m);
    } return 0;
}
int man::find_father(int a)
{
    int temp=a,j; while(ill[a].father!=a)
    {
        a=ill[a].father;
    }
    while(a!=temp)
    {
        j=ill[temp].father; ill[temp].father=a; temp=j;
    }
    return a;
}
void start(void)
{
    int i; for(i=0;i<500002;i++)
    {
         ill[i].father=i;
    }
}
void find_sum(int m)
{
    int i,sum=0; for(i=0;i<m;i++)
    {
        if(ill[i].find_father(i)==ill[0].find_father(0))
        {
            sum++;
        }
    }
    cout<<sum<<endl;
}
