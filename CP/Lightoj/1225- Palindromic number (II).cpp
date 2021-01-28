#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        string num;
        string::size_type sz;
        int  n, r;
        cin >> n;
        num = to_string(n);
        reverse(num.begin(), num.end());
        r = stoi(num, &sz);
        cout << "Case " << i << ": ";
        if(n == r)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}