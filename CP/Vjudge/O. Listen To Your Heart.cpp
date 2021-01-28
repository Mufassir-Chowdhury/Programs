#include<iostream>
#include<math.h>
using namespace std;

int main(){
    for(int i=0; i<300; i++){
        double x = (double)i;
        if( pow((pow(x-3., .5)-pow(((3.*x+2.)/2.), 1./3.)), 7.) == pow((x- sqrt((x*x-1984.)/5.)), 3.))
            cout << i;
    }
    return 0;
}