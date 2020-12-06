#include<iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    char grid[m+2][n+2];
    for(int i=0; i<m+2; i++)
        for(int j=0; j<n+2; j++)
            grid[i][j] = '.';
    for(int i=1; i<m+1; i++)
        for(int j=1; j<n+1; j++)
            cin >> grid[i][j];
    for(int i=1; i<m+1; i++){
        for(int j=1; j<n+1; j++){
            if(grid[i][j] == '.'){
                int k = 0;
                if(grid[i-1][j-1] == '*')
                    k++;
                if(grid[i-1][j] == '*')
                    k++;
                if(grid[i-1][j+1] == '*')
                    k++;
                if(grid[i][j-1] == '*')
                    k++;
                if(grid[i][j+1] == '*')
                    k++;
                if(grid[i+1][j-1] == '*')
                    k++;
                if(grid[i+1][j] == '*')
                    k++;
                if(grid[i+1][j+1] == '*')
                    k++;
                if(k)
                    grid[i-1][j-1] = k+'0';
                else
                    grid[i-1][j-1] = '.';
            } else
                grid[i-1][j-1] = '*';
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cout << grid[i][j];
        cout << endl;
    }
    return 0;
}