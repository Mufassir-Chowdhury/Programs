#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max(max(a*c, a*d), max(b*c, b*d)) << endl;
    return 0;
}