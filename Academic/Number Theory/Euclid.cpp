#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int n, m; 
    cin >> n >> m;
    cout << gcd(n, m) << endl;
    cout << lcm(n, m) << endl;
    return 0;
}