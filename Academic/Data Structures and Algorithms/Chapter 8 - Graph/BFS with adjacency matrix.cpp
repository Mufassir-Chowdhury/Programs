#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define sz 1000
using namespace std;

int graph[sz][sz], adj[sz][sz];

pair <int, int> bfs(int x, int y, int n, int m){
    queue< pair<int, int> > q;
    q.push({x, y});
}

int main(){
    int n, m, x, y, k, u, v;
    cin >> n >> m >> x >> y >> k;
    graph[x][y] = 2;
    for(int i=0; i<k; i++){
        cin >> u >> v;
        adj[u][v] = 1;
    }
    bfs(x, y, n, m);
    return 0;
}