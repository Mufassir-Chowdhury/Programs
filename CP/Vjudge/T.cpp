#include<iostream>
#include<vector>
using namespace std;
vector<bool>list(1000000000);
int main(){
    int n, k, total = 0, x, last = 0;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> x;
        list[x] = true;
        if(x > last)
            last = x;
    }
    for(int i=0; i<last + 3; i++)
        if(list[i] && list[i+k])
            total++;
    cout << total << endl;
    return 0;
}