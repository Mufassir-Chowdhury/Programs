#include<iostream>
using namespace std;

int main(){
    int a[8];
    for(int i=0; i<8; i++)
        cin >> a[i];
    cout << a[0]*a[4]+a[1]*a[6] << " " << a[0]*a[5]+a[1]*a[7] << endl;
    cout << a[2]*a[4]+a[3]*a[6] << " " << a[2]*a[5]+a[3]*a[7] << endl;
    return 0;
}