#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        cout << "Case " << i << ": ";
        if((r1+c1)%2 != (r2+c2)%2)
            cout << "impossible" << endl;
        else{
            if(abs(r1-c1) == abs(r2-c2) || (abs(r1-r2) == abs(c1-c2) && r1+c1 == r2 +c2))
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}