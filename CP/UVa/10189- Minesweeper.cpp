#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int t = 0;
    int m, n;
    while((cin >> m >> n) && m && n){
        char field[m+2][n+2];
        memset(field, '.', sizeof(field));
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                cin >> field[i][j];
            }
        }
        if(t)
            cout << endl;
        
        cout << "Field #" << ++t << ":" << endl;
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(field[i][j] == '*'){
                    cout << '*';
                    continue;
                } else{
                    int num = 0;
                    if(field[i][j-1] == '*')
                        num++;
                    if(field[i][j+1] == '*')
                        num++;
                    if(field[i-1][j-1] == '*')
                        num++;
                    if(field[i-1][j] == '*')
                        num++;
                    if(field[i-1][j+1] == '*')
                        num++;
                    if(field[i+1][j-1] == '*')
                        num++;
                    if(field[i+1][j] == '*')
                        num++;
                    if(field[i+1][j+1] == '*')
                        num++;
                    cout << num;
                }
            }
            cout << endl;
        }
    }
    return 0;
}