#include<iostream>
using namespace std;

int main(){
    int n;
    while((cin >> n) && n != -1){
        int arr[n], sum = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        cout << (double)n%1. << endl;
    }
    return 0;
}