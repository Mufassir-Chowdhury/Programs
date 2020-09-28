#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n, money = 0;
        cin >> n;
        cout << "Case " << i << ":" << endl;
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
    }
    return 0;
}