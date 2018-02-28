#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <ctype.h>
#include <cmath>
using namespace std ;
const int  maxn = 10800101 ;

int ans[maxn] ;

int main(){
    int num = 1 ;
    for ( int i = 19 ; i <= maxn ; i ++ ){
        int k = i ; /// k = i = 119
        int sum = 0 ;
        while ( k > 0 ){
            int a = k % 10 ;
            sum += a ;
            k /= 10 ;
        }
        if ( sum == 10 ) ans[num++] = i ;
    }
    int n ;
    while ( cin >> n ){
        cout << ans[n] << endl ;
    }
    return 0 ;
}
