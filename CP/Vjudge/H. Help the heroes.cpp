#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int m, n;
        cin >> m >> n;
        char adj[m][n];
        for(int j=0; j<m; j++)
            for(int k=0; k<n; k++)
                cin >> adj[j][k];
        int adm[m][n];
        for(int j=1; j<m-1; j++){
            for(int k=1; k<m-1; k++){
                if(adj[j][k] !)
            }
        }
    }
    return 0;
}