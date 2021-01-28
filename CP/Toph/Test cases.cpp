#include<iostream>
using namespace std;

int main(){
    int n, c, m, a, b, e;
    cin >> n >> c >> m;
    while(n--){
        cin >> a >> b >> e;
        if(b>c){
            cout << "CLE" << endl;
            return 0;
        } else if(e>m){
            cout << "MLE" << endl;
            return 0;
        } else if(a){
            cout << "WA" << endl;
            return 0;
        }
    }
    cout << "AC" << endl;
    return 0; 
}