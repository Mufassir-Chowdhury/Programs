#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int main(){
    double x, sum =0;
    while(cin >> x){
        x = floor(x/3)-2;
        while(x>0){
            sum += x;
            x = floor(x/3)-2;
        }
    }
    printf("%100lf", sum);
    return 0;
}