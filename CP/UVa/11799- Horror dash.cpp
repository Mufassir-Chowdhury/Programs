#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int j=0; j<n; j++)
            cin >> arr[j];
        cout << "Case " << i << ": " << *(max_element(arr.begin(), arr.end())) << endl;
    }
    return 0;
}