#include<iostream>
using namespace std;

int adj[1000][1000];

void printMatrix(int n){
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cout << adj[i][j] << " \n"[j==n-1];
}

int main(){
    int n, m, x, y, w;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> x >> y >> w;
        adj[x][y] = w;
        adj[y][x] = w;
    }
    printMatrix(n);
    return 0;
}