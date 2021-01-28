#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define sz 1000
#define inf (i<<20)
using namespace std;

vector<int> adj[sz], w[sz];

int par[sz], cost[sz];

int dijkstra(int st, int en){
    priority_queue< pair<int, int>, vector<pair<int, int> >, greater< pair<int, int> > > pq;
    pq.push({0, st});
    cost[st] = 0;
    int u, c;
    while(!pq.empty()){
        c = pq.top().first;
        u = pq.top().second;
        pq.pop();
        for(int i=0; i<adj[u].size(); i++){
            if(c + w[u][i] < cost[adj[u][i]]){
                cost[adj[u][i]] = c + w[u][i];
                pq.push({cost[adj[u][i]], adj[u][i]});
                par[adj[u][i]] = u;
            }
        }
    }
    return cost[en];
}

void init(int n){
    for(int i=0; i<n; i++)
        par[i] = -1, cost[i] = inf;
}

int main(){
    int x, y, z, n, m, st, en;
    cin >> n >> m;
    init(n);
    for(int i=0; i<m; i++){
        cin >> x >> y >> z;
        x--, y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
        w[x].push_back(z);
        w[y].push_back(z);
    }
    cin >> st >> en;

    x = dijkstra(st-1, en-1);

    cout << "The minimum path cost from " << st << " to " << en << " is " << x << endl;
    x = en -1;
    vector<int>res;
    while(~x){
        res.push_back(x+1);
        x = par[x];
    }
    reverse(res.begin(), res.end());
    cout << "The parth: ";
    for(int i=0; i<res.size(); i++)
        cout << res[i] << " \n"[i==res.size()-1];
    return 0;
}