#include <iostream>
#include <cstring>
using namespace std;
int num[10000],step[10000];
int main()
{
    int n;
    while (cin>>n)
    {
        if (n==0) return 0;
        for (int i=0;i<n;i++)
        {
            cin>>num[i];
            step[i]=num[i];
        }
        for (int i=0;i<n;i++)
            for (int j=0;j<i;j++)
                if (num[i]>num[j]&&step[i]<step[j]+num[i])
                    step[i]=step[j]+num[i];
        int ans=0;
        for (int i=0;i<n;i++)
            if (step[i]>ans) ans=step[i];
        cout<<ans<<endl;
    }
}

