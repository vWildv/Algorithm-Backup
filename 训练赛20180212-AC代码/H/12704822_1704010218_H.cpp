#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <ctype.h>
#include <cmath>
using namespace std ;
const int maxn = 1000005 ;
int second[maxn] ;

int main(){
    int n , t ;
    while ( cin >> n >> t ){
        for ( int i = 1 ; i <= n ; i ++ ){
            cin >> second[i] ;
        }
        for ( int i = 1 ; i <= n ; i ++ ){
            int remind = 86400-second[i] ;
            t -= remind ;
            if ( t <= 0 ) {cout << i << endl ;break ;}
        }
    }
    return 0 ;
}
