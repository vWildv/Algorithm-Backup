#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[100]={1,2,3,4,5,6,7,8,9,190,209,48,247,266,195,448,476,198,874,3980,399,2398,1679,888,4975,1898,999,7588,4988,39990,8959,17888,42999,28798,57995,29988,37999,59888,49998,699880,177899,88998,99889,479996,499995,589996,686999,699888,788998,9999950,889899,1989988,2989889,1999998,60989995,7979888,5899899,8988898,8888999,79999980,9998998,19999898,19899999,59989888,69999995,67999998,58999999,99899888,79899999,898999990,289999997,399999888,499988899,2739999998,999999975,889998988,899897999,898999998,999899998,29999998880,999999999,4989899998,5989989899,6899999988,9999998995,7999899998,8999799999,19999999888,9989999999,99999999990,59878999999,59999999996,67998999999,79889999998,279999999995,199999989888,99999999898,388998999998};

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n==99){
            printf("9999999999999999999999\n");
        }
        else if(n==100){
            printf("9191919191919191919100\n");
        }
        else printf("%lld\n",a[n-1]);
    }
}