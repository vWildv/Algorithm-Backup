#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll pow(ll di,ll mi)
{
    if(mi==0)return 1;
    if(mi%2)
    {
        return ((di%100003)*(pow(di,mi-1)%100003))%100003;
    }
    else
    {
        ll tmp=pow(di,mi/2)%100003;
        tmp=tmp*tmp%100003;
        return tmp;
    }

}
int main ()
{
    ll n,m;
    cin>>m>>n;
    cout<<(pow(m,n)-(m%100003)*pow(m-1,n-1)%100003+100003)%100003<<endl;
}
