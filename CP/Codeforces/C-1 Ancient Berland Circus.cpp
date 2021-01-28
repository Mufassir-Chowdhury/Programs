#include<iostream>
using namespace std;

int main(){
    long double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    long double area = .5*(x1*y2+x2*y3+x3*y1-x1*y3-x3*y2-x2*y1);
    cout << area << endl;
    return 0;
}