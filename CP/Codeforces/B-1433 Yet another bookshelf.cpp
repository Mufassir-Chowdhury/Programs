#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, left, right, num = 0;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<n; i++){
            if(arr[i]){
                left = i;
                break;
            }
        }
        for(int i=n-1; i>-1; i--){
            if(arr[i]){
                right = i;
                break;
            }
        }
        for(int i=left; i<right; i++)
            if(!arr[i])
                num++;
        cout << num << endl;
    }
    return 0;
}