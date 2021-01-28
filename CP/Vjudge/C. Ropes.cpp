#include<iostream>
#include<math.h>
using namespace std;

double dis(double a, double b, double c, double d){
    double l = sqrt(pow(a-b, 2.) + pow(c-d, 2.));
    return l;
}

int main(){
    int n;
    double r, length =0;
    cin >> n >> r;
    double x[n], y[n];
    for(int i=0; i<n; i++)
        cin >> x[i] >> y[i];
    for(int i=0; i<n; i++)
        length += dis(x[i], x[(i+1)%n], y[i], y[(i+1)%n]);
    length += 2*3.14159*r;
    cout << length << endl;
    return 0;
}