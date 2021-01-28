#include <stdio.h>
#include<iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        double R, r;
        int n;
        cin >> R >> n;
        r = R / ( 1 + ( 1 / sin (2*acos(0.0)/n) ));
        printf("Case %d: %.8lf\n", i, r);
    }
    return 0;
}