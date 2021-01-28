#include<iostream>
using namespace std;

int main(){
    int a[8][27];
    for(int i=0; i<8; i++){
        for(int j=0; j<27; j++)
            cin >> a[i][j];
    }
    for(int i=0; i<27; i++){
        int total = 0;
        for(int j=0; j<8; j++){
            total += a[j][i];
        }
        cout << total << endl;
    }
    return 0;
}