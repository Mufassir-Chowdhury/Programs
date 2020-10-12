#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    int n, m;
    char p;
    vector <char> list;
    list.clear();
    cin >> n >> m >> p;
    char office[n+2][m+2];
    memset(office, '.', sizeof(office));
    for(int i=1; i<n+1; i++)
        for(int j=1; j<m+1; j++)
            cin >> office[i][j];
    
    for(int i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){
            if(office[i][j] == p){
                if(office[i+1][j] != p && office[i+1][j] != '.')
                    list.push_back(office[i+1][j]);
                if(office[i][j+1] != p && office[i][j+1] != '.')
                    list.push_back(office[i][j+1]);
                if(office[i][j-1] != p && office[i][j-1] != '.')
                    list.push_back(office[i][j-1]);
                if(office[i-1][j] != p && office[i-1][j] != '.')
                    list.push_back(office[i-1][j]);
            }
        }
    }
    sort(list.begin(), list.end());
    int num = 0;
    vector<char>::iterator it;
    for(it = list.begin()+1; it <= list.end(); it++)
        if(*(it) != *(it-1))
            num++;
    cout << num << endl;
    return 0;
}