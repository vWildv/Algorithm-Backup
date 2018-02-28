//#include<iostream>
//#include<cmath>
//using namespace std;
//
///注意同为0的情况
//int main()
//{
//    int r, g;
//    while(cin >> r >> g)
//    {
//        if(r==0&&g==0)
//            cout << "NO" << endl;D
//        else if(abs(r-g) <= 1)
//            cout << "YES" << endl;
//        else
//            cout << "NO" << endl;
//    }
//    return 0;
//}


///0219D
#include<iostream>
#include<stdio.h>
using namespace std;

const long long int N = 1000000000+7;
int n, k;

long long f_Pow(long long x, long long n)
{
  long long result;
  if (n == 0)
    return 1;
  else
  {
    while ((n & 1) == 0)
    {
      n >>= 1;
      x *= x%N;
    }
  }
  result = x;
  n >>= 1;
  while (n != 0)
  {
    x *= x%N;
    if ((n & 1) != 0)
      result *= x%N;
    n >>= 1;
  }
  return result%N;
}
int main()
{
    int t;
    cin >> t;
    while(t --)
    {
        long long int sum = 0;
        cin >> n >> k;
        for(int i=1; i<=n; i++) {
            sum = sum%N+f_Pow(i,k)%N;
        }
        printf("%lld\n",sum%N);
    }
    return 0;
}