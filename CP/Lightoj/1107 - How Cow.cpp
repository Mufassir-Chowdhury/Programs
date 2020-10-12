#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int x1, x2, y1, y2, m;
        cin >> x1 >> y1 >> x2 >> y2 >> m;
        cout << "Case " << i << ":" << endl;
        while(m--){
            int x, y;
            cin >> x >> y;
            if(x >= x1 && y >= y1 && x <= x2 && y <= y2)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}