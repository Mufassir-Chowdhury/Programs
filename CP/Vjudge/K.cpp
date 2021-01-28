#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, cost = 0, x, last;
        cin >> n;
        vector <long long int> arr;
        for(int i=0; i<n; i++){
            cin >> x;
            arr.push_back(x);
        }
        if(n==1){
            cout << x << endl;
            continue;
        }
        sort(arr.begin(), arr.end());
        last = arr[0] + arr[1];
        cost += last;
        arr.erase(arr.begin());
        arr.erase(arr.begin());
        while(arr.size() > 0){
            if(arr.size() == 1 || last < arr[1]){
                last += arr[0];
                cost += last;
                arr.erase(arr.begin());
            } else{
                last = arr[0] + arr[1];
                cost += last;
                arr.erase(arr.begin());
                arr.erase(arr.begin());
            }
        }
        cout << cost << endl;
    }
    return 0;
}