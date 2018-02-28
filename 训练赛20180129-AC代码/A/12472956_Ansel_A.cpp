#include<iostream>
using namespace std;
bool check(int a,int b)
{
    int ta=1;
    int tb=1;
    if((a%4==0 && a%100!=0) || (a%400==0))
        ta=0;
    if((b%4==0 && b%100!=0) || (b%400==0))
        tb=0;
    if(ta==tb)
        return true;
    else
        return false;
}
int main()
{
    int n;
    while(cin>>n)
    {
        int tmp=n;
        int ans=0;
        while(1)
        {
            if((n%4==0 && n%100!=0) || (n%400==0))
            {
                ans+=2;
                //   cout<<n<<" "<<ans<<endl;
            }
            else
            {
                ans++;
            }
            // cout<<n<<" "<<ans<<endl;
            n++;
            if(ans%7==0 && check(tmp,n))
                break;

        }
        cout<<n<<endl;


    }
}
