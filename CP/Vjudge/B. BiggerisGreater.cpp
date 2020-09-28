#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        if(next_permutation(a.begin(), a.end()) == 0){
            cout << "no answer" << endl;
            continue;
        }
        cout << a << endl;
    }
    return 0;
}