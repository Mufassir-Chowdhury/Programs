#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define sz 1000
using namespace std;

vector< int > adj[sz];
int par[sz];
bool vis[sz];

int bfs(int s, int d){
    queue< pair <int, int> > q;
    q.push({s, 0});
    vis[s] = true;
    int node, cost, u;
    while(!q.empty()){
        node = q.front().first;
        cost = q.front().second;
        q.pop();
        if(node == d)
            return cost;
        else{
            for(int i=0; i<adj[node].size(); i++){
                u = adj[node][i];
                if(vis[u]) continue;
                else{
                    q.push({u, cost+1});
                    vis[u] = true;
                    par[u] = node;
                }
            }
        }
    }
    return -1;
}

void init(int n){
    for(int i=0; i<n; i++)
        par[i] = -1;
}

int main(){
    int n, m, x, y;
    cin >> n >> m;
    init(n);
    for(int i=0; i<m; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cin >> x >> y;
    n = bfs(x, y);
    if(~n){
        cout << "The shortest path from " << x << " to " << y << " costs " << n << " units" << endl;
        cout << "The path is = ";
        vector <int> path;
        while(~y){
            path.push_back(y);
            y = par[y];
        }
        reverse(path.begin(), path.end());
        for(int i=0; i<path.size(); i++)
            cout << path[i] << " \n"[i == path.size()-1];
    }
    else
        cout << "There is no path from " << x << " to " << y << endl; 
    return 0;
}