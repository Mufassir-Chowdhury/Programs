#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        char chess[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if((i+j)%2)
                    chess[i][j] = '.';
                else
                    chess[i][j] = '*';
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout << chess[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}