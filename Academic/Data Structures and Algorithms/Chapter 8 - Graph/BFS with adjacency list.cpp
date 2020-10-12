#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;

vector<int>adj[1000];
bool vis[1000];
int par[1000];

int bfs(int s, int d){
    queue<pair<int, int> >q;
    q.push({s, 0});
    vis[s] = true;
    int node, cost;
    while(!q.empty()){
        node = q.front().first;
        cost = q.front().second;
        q.pop();
        if(node == d)
            return cost;
        for(int i=0; i<adj[node].size(); i++){
            int u = adj[node][i];
            if(vis[u])
                continue;
            q.push({u, cost + 1});
            vis[u] = true;
            par[u] = node;
        }
    }
    return -1;
}

void init(int n){
    for(int i=0; i<n; i++)
        par[i] = -1;
}

int main(){
    int n, m, x, y, w;
    cin >> n >> m;
    init(n);
    for(int i=0; i<m; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cin >> x >> y;
    w = bfs(x, y);
    if(~w){
        cout << "Minimum Cost Using BFS = " << w << endl;
        vector<int>path;
        while(~y){
            path.push_back(y);
            y = par[y];
        }
        reverse(path.begin(), path.end());
        for(int i=0; i<path.size(); i++)
            cout << path[i] << " \n"[i == path.size()-1];
    } else
        cout << "There is no path from " << x << " to " << y << endl;
    return 0;
}