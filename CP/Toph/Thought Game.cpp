#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        if(((a+b)/2)%2)
            cout << "Oops!" << endl;
        else
            cout << "Sadia will be happy." << endl;
    }
    return 0;
}