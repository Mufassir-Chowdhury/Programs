#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t ; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(a*a == b*b + c*c){
            cout << "Case " << i << ": " << "yes" << endl;
        } else if(b*b == c*c + a*a){
            cout << "Case " << i << ": " << "yes" << endl;
        } else if(c*c == b*b + a*a){
            cout << "Case " << i << ": " << "yes" << endl;
        } else{
            cout << "Case " << i << ": " << "no" << endl;
        }
    }
    return 0;
}