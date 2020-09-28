#include<iostream>
#include<string>
using namespace std;

int main(){
    int t; 
    string blank;
    cin >> t;
    for(int i=1; i<=t; i++){
        int dust = 0, n;
        getline(cin, blank);
        cin >> n;
        for(int j=0; j<n; j++){
            int d;
            cin >> d;
            if(d < 0)
                continue;
            else dust += d;
        }
        cout << "Case " << i << ": " << dust << endl;
    }
    return 0;
}