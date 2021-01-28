#include<iostream>
using namespace std;

int raised_to_the_power(int base, int exponent){
    if (exponent)
        return base*raised_to_the_power(base, exponent-1);
    return 1;
}
