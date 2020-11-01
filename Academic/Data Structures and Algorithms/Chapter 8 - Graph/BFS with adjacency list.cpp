#include<iostream>
#include<vector>
#include<queue>
#define sz 1000
using namespace std;

vector<int>adj[sz];
bool vis[sz];

int bfs(int s, int d){
    queue< pair<int, int> > q;
    q.push({s, 0});
    vis[s] = true;
    int node, cost, u;
    while(!q.empty()){
        node = q.front().first;
        cost = q.front().second;
        q.pop();
        if(node == d)
            return cost;
        for(int i=0; i<adj[node].size(); i++){
            u = adj[node][i];
            if(vis[u]) continue;
            q.push({u, cost+1});
            vis[u] = true;
        }
    }
    return -1;
}

int main(){
    int n, m, x, y, w;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cin >> x >> y;
    w = bfs(x, y);
    if(~w) cout << "Minimum cost using BFS = " << bfs(x, y) << endl;
    else cout << "There is no path between " << x << " to " << y << endl;
}