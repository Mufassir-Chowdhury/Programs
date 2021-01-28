#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, x, min_mem, min_dis = 10000000, dis;
    cin >> n;
    vector<int> list, pos;
    for(int i=0; i<n; i++){
        cin >> x;
        list.push_back(x);
    }
    min_mem = *(min_element(list.begin(), list.end()));
    for(int i=0; i<n; i++){
        if(list[i] == min_mem){
            pos.push_back(i);
        }
    }
    for(int i=1; i<pos.size(); i++)
        if(pos[i]-pos[i-1] < min_dis)
            min_dis = pos[i]-pos[i-1];
    cout << min_dis << endl;
    return 0;
}