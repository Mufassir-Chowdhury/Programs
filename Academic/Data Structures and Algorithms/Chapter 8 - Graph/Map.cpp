#include<iostream>
#include<map>
#include<iterator>
#include<algorithm>
using namespace std;

map< pair<int, int>, int > adj;

int main(){
    int n, m, x, y, w;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> x >> y >> w;
        if(!adj.count({x, y}))
            adj[{x, y}] = w;
        else
            adj[{x, y}] = min(adj[{x, y}], w);
    }
    auto it = adj.begin(), mx = adj.begin();
    while(it != adj.end()){
        if(mx -> second < it -> second)
            mx = it;
        it++;
    }
    cout << "(" << mx ->first.first << "," << mx->first.second << ")" << mx->second << endl;
    return 0;
}