#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<queue>
#include<map>
using namespace std;
typedef long long ll;
int main()
     {int a[1002];
     ll b[1002];
     int i,j,n;
     while(cin >> n)
     {ll Max;
     if(n == 0)break;
     memset(b,0,sizeof(b));
     cin >> a[0];
     b[0] = a[0];
     Max = a[0];
     for(i = 1;i < n;i ++)
     {cin >> a[i];
     b[i] = a[i];
        for(j = i - 1;j >= 0;j --)
            if(a[i] > a[j]){b[i] = max(a[i] + b[j],b[i]);Max = max(Max,b[i]);}
     }
         cout<<Max<<endl;
     }
     }
