#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i; j++)
            cout << " ";
        for(int j=0; j<i; j++)
            cout << "*" << " \n"[j==i-1];
    }
    return 0;
}