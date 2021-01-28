#include<iostream>
using namespace std;

int main(){
    int q;
    while((cin >> q) && q){
        int n, m;
        cin >> n >> m;
        while(q--){
            int x, y;
            cin >> x >> y;
            if(x == n || y == m)
                cout << "divisa" << endl;
            else if(x > n && y > m)
                cout << "NE" << endl;
            else if(x > n && y < m)
                cout << "SE" << endl;
            else if(x < n && y > m)
                cout << "NO" << endl;
            else if(x < n && y < m)
                cout << "SO" << endl;
        }
    }
    return 0;
}