#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <ctype.h>
#include <cmath>
using namespace std ;

int main(){
    int n , x ;
    while ( cin >> n >> x ){
        int sum = 0 ;
        for ( int i = 1 ; i <= n ; i ++ ){
            int k ;
            cin >> k ;
            sum += k ;
        }
        if ( sum + n - 1 == x ) cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }
    return 0 ;
}
