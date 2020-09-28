#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        vector<int>cost(3);
        cin >> cost[0] >> cost[1] >> cost[2];
        sort(cost.begin(), cost.end());
        cout << "Case " << i << ": " << cost[1] << endl;
    }
    return 0;
}