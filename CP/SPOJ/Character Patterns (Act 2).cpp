#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        char frame[n][m];
        cout << n << " " << m << endl;
        memset(frame, '.', sizeof(frame));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
                cout << frame[i][j];
            cout << endl;
        }
        cout << endl;
        for(int i=0; i<n; i++)
            frame[i][0] = '*';
        for(int i=0; i<n; i++)
            frame[i][m-1] = '*';
        for(int i=0; i<m; i++)
            frame[0][i] = '*';
        for(int i=0; i<m; i++)
            frame[n-1][m] = '*';
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
                cout << frame[i][j];
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}