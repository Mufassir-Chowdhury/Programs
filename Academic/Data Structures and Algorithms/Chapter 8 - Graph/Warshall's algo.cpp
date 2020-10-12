#include<iostream>
#include<algorithm>
#define inf (1<<20)
using namespace std;

int adj[1000][1000], adn[1000][1000];

void printMatrix(int n){
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cout << adj[i][j] << " \n"[j==n-1];
}

void init(int n){
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            if(adj[i][j])
                adn[i][j] = j;
            else{
                adj[i][j] = inf;
                adn[i][j] = -1;
            }
        }
}

void warshall(int n){
    for(int k=0; k<n; k++)
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                if(adj[i][j] > adj[i][k] + adj[k][j]){
                    adj[i][j] = adj[i][k] + adj[k][j];
                    adn[i][j] = adn[i][k];   
                }
}

int main(){
    int n, m, x, y, w;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> x >> y >> w;
        adj[x][y] = w;
        adj[y][x] = w;
    }
    init(n);
    cout << "Before running warshall\'s algo\n";
    printMatrix(n);
    warshall(n);
    cout << "After running warshall\'s algo\n";
    printMatrix(n);

    cin >> m;
    for(int i=0; i<m; i++){
        cin >> x >> y;
        cout << "Path Cost = " << adj[x][y] << endl;
        cout << "Path from " << x << " to " << y << endl;
        cout << x;
        while(x != y){
            x = adn[x][y];
            cout << " " << x;
        }
        cout << endl;
    }
    return 0;
}