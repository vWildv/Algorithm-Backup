#include <iostream>
using namespace std;

int main(){   
    int y, n;
    cin >> y >> n;
    int year = 0;
    int a[4];
    for(; ; y++,year++) {
        a[0] = y%10;
        a[1] = y/10%10;
        a[2] = y/100%10;
        a[3] = y/1000%10;
        int book[10] = {0};
        for(int i = 0; i < 4; i++) {
            book[ a[i] ]++;  
        }
        int ans = 0;  
        for(int i = 0; i < 10; i++) {
            if(book[i] != 0) {
                ans++;
            }
        }
        if(ans == n) {
            printf("%d %04d", year, y);
            return 0;
        } 
    }
    return 0;
}