#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    vector <int> list;
    while(cin >> n){
        list.push_back(n);
        sort(list.begin(), list.end());
        if(list.size()%2){
            cout << list[list.size()/2] << endl;
        }
        else{
            cout << (list[list.size()/2 -1] + list[list.size()/2]) / 2 << endl;
        }
    }
    return 0;
}