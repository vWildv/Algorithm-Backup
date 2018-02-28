//kmp.cpp
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
	int n;
	string a,b;
	while(cin>>n>>a>>b)
	{
		int ans=0;int t;
		int hh=(a[0]-'0')*10+a[1]-'0';
		int mm=(b[0]-'0')*10+b[1]-'0';
		if(mm%10==7||hh%10==7)
        {
            cout<<0<<endl;
            continue;
        }
		while(hh%10!=7&&mm%10!=7)
        {
            mm-=n;
            ans++;
            if(mm<0){mm+=60;hh--;}
            if(hh<0)hh+=24;
        }
		cout<<ans<<endl;
	}
}
