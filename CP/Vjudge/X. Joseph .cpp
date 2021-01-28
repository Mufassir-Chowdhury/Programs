#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[14] = {0, 2, 7, 5, 30, 169, 441, 1872, 7632, 1740, 93313, 459901, 1358657, 2504881};
    int n;
    while((cin >> n) && n != 0)
        cout << arr[n] << endl;
    return 0;
}