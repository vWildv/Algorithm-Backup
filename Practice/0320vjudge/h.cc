#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    double ab,ac,ad,bc,bd,cd;
    while(~scanf("%lf%lf%lf%lf%lf%lf",&ab,&ac,&ad,&bc,&bd,&cd)){
        double x=4*ad*ad*bd*bd*cd*cd-ad*ad*(bd*bd+cd*cd-bc*bc)*(bd*bd+cd*cd-bc*bc)-bd*bd*(cd*cd+ad*ad-ac*ac)*(cd*cd+ad*ad-ac*ac);
        double y=cd*cd*(ad*ad+bd*bd-ab*ab)*(ad*ad+bd*bd-ab*ab)-(ad*ad+bd*bd-ab*ab)*(bd*bd+cd*cd-bc*bc)*(cd*cd+ad*ad-ac*ac);
        printf("%.4f\n",sqrt(x-y)/12);
    }
}
