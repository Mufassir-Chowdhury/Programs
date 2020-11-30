#include<iostream>
using namespace std;

int main(){
    int m ,n, total = 0;
    cin >> m >> n;
    char grid[m+2][n+2];
    for(int i=0; i<m+2; i++)
        for(int j=0; j<n+2; j++)
            grid[i][j] = '.';
    for(int i=1; i<m+1; i++)
        for(int j=1; j<n+1; j++)
            cin >> grid[i][j];
    for(int i=1; i<m+1; i++)
        for(int j=1; j<n+1; j++)
            if(grid[i][j]!='*'&&grid[i][j-1]!='*'&&grid[i][j+1]!='*'&&grid[i-1][j]!='*'&&grid[i+1][j]!='*')
                total++;
    cout << total << endl;
    return 0;
}