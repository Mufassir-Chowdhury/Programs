#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string ns;
        ns = to_string(n);
        if(n%100 == 35)
            cout << '-' << endl;
        else if(ns[0] == '1' && ns[1] == '9' && ns[2] == '0')
            cout << '?' << endl;
        else if(n[0] == '9' && n%4 == 0)
            cout << '*' << endl;
        else
            cout << '+' << endl;
    }
    return 0;
}