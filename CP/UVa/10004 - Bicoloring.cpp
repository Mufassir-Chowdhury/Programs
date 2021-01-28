#include<iostream>
#include<vector>
using namespace std;

bool bicolor = true;

void dfs(int n, int m, int *col, const vector< vector<int> > &adj){
    if(col[n] && col[n] == col[m])
        bicolor = false;
    else if(!col[n]){
        if(col[m] == 1)
            col[n] = 2;
        else
            col[n] = 1;
        for(auto i: adj[n]){
            dfs(i, n, col, adj);
        }
    }
}

int main(){
    int n, l;
    while((cin >> n) && n ){
        bicolor = true;
        cin >> l;    
        vector< vector<int> > adj(n+1);
        for(int i=0; i<l; i++){
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int color[n] = {0};
        color[0] = 1;
        for(auto i: adj[0]){
            dfs(i, 0, color, adj);
        }
        if(bicolor)
            cout << "BICOLORABLE." << endl;
        else
            cout << "NOT BICOLORABLE." << endl;
    }   

    return 0;
}