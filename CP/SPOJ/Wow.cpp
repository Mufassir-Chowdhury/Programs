#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char a[n+3];
    a[0] = 'W';
    a[n+1] = 'w';
    for(int i=1; i<=n; i++)
        a[i] = 'o';
    a[n+2] = '\0';
    cout << a << endl;
}