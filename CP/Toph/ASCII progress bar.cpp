#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long double p;
    cin >> p;
    int percent = floor(p/10);
    cout << "[";
    for(int i=0; i<percent; i++)
        cout << "+";
    for(int i=0; i<10-percent; i++)
        cout << ".";
    cout << "] " << floor(p) << "%" << endl;
    return 0;
}