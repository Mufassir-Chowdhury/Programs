#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        if(a < 11)
            cout << 0 << " " << a << endl;
        else
            cout << a-10 << " " << 10 << endl;
    }
    return 0;
}