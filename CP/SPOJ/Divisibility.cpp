#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector <int> div;
        div.clear();
        int n, x, y;
        cin >> n >> x >> y;
        for(int i=x; i<n; i++)
            if(i%x == 0 && i%y)
                div.push_back(i);
        for(int &i:div)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}