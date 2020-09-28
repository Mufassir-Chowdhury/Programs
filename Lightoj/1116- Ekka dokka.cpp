#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n;
        bool found = 0;
        cin >> n;
        for(int j=2; j<n; j++){
            if(n%j == 0 && (n/j)%2){
                cout << "Case " << i << ": " << n/j << " " << j << endl;
                found = 1;
                break;
            }
        }
        if(!found)
            cout << "Case " << i << ": impossible" << endl;
    }
    return 0;
}