#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string num = to_string(n);
        reverse(num.begin(), num.end());
        string::size_type sz;
        n = stoi(num, &sz);
        cout << n << endl;
    }
    return 0;
}