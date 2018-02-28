#include <iostream>
#include <cstdio>
using namespace std;

bool check(int n)
{
    if (n%400==0) return 1;
    else if (n%100==0) return 0;
    else if (n%4==0) return 1;
    else return 0;
}

int main()
{
    int n;
    cin>>n;
    int k=n;
    int t=0;
    while (1)
    {
        n++;
        if (n%400==0) t+=366;
        else if (n%100==0) t+=365;
        else if (n%4==0) t+=366;
        else t+=365;
        if (t%7==0 && check(k)==check(n)) break;
    }
    cout<<n<<endl;
}
