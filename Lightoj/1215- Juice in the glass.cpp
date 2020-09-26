#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        double r1, r2, h, p, vol;
        cin >> r1 >> r2 >> h >> p;
        r1 = ((r1-r2)*p/h) +r2;
        vol = (2*acos(0.0)/3)*(pow(r1,3.)-pow(r2,3.));
        printf("Case %d: %.6lf\n", i, vol);
    }
    return 0;
}