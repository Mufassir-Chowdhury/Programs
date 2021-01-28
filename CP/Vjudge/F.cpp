#include<iostream>
#include<set>
using namespace std;

int main(){
    int n, x;
    while((cin >> n) && n){
        multiset<int>s;
        for(int i=0; i<n; i++){
            cin >> x;
            s.insert(x);
        }
        for(auto j: s)
                cout << j << " ";
            cout << endl;
        int cost = *s.begin();
        s.erase(s.begin());
        for(auto j: s)
                cout << j << " ";
            cout << "\t " << cost << endl;
        for(int i=0; i<n; i++){
            cost += *s.begin();
            s.erase(s.begin());
            s.insert(cost);
            for(auto j: s)
                cout << j << " ";
            cout << "\t " << cost << endl;
        }
        cout << cost << endl;
    }
    return 0;
}