#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        double r;
        cin >> r;
        double area = 4.*r*r - 2.*acos(0.0)*r*r + pow(10, -9);
        printf("Case %d: %.2lf\n", i, area);
    }
    return 0;
}