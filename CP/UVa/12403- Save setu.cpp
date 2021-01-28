#include<iostream>
using namespace std;

int main(){
    int n, money = 0;
    cin >> n;
    while(n--){
        string a;
        cin >> a;
        if(a == "donate"){
            int k;
            cin >> k;
            money += k; 
        } else if(a == "report")
            cout << money << endl;
    }
    return 0;
}