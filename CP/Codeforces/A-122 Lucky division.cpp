#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> lucky = {4, 7, 47, 74, 44, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for(auto i: lucky){
        if(n>=i && n%i==0){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}