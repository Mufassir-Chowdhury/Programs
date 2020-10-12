#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a == b || a == b+2){
            if(a%2)
                cout << a+b-1 << endl;
            else
                cout << a+b << endl;
        } else{
            cout << "No Number" << endl;
        }
    }
    return 0;
}