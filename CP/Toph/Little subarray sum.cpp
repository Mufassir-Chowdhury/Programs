#include<iostream>
using namespace std;

int main(){
    int n, a, b, sum = 0;
    cin >> n >> a >> b;
    int array[n];
    for(int i=0; i<n; i++)
        cin >> array[i];
    for(int i=a; i<=b; i++)
        sum += array[i];
    cout << sum << endl;
    return 0;
}