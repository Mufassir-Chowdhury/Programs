#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int f, total = 0;
        cin >> f;
        while(f--){
            int s, n, ef;
            cin >> s >> n >> ef;
            total += ef*s;
        }
        cout << total << endl;
    }
    return 0;
}