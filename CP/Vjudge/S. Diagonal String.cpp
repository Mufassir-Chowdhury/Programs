#include<iostream>
using namespace std;

int main(){
    char str[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> str[i][j];
        }
    }
    cout << str[0][0] << str[1][1] << str[2][2] << endl;
    return 0;
}