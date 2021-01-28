#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, num = 0;
        bool sorted = 1;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<n; i++){
            sorted = 1;
            for(int j=1; j<n; j++){
                if(arr[j] < arr[j-1]){
                    swap(arr[j], arr[j-1]);
                    num++;
                    sorted = 0; 
                }
            }
            if(sorted)
                break;
        }
        cout << "Optimal train swapping takes " << num << " swaps." << endl;
    }
    return 0;
}