#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    cout << ceil(a/c)*ceil(b/c) << endl;
    return 0;
}