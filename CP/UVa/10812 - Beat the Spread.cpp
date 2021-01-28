#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int s, d;
        cin >> s >> d;
        if(s<d)
            cout << "impossible" << endl;
        else
            cout << (s+d)/2 << " " << (s-d)/2 << endl;
     }
    return 0;
}