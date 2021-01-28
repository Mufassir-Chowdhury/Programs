#include<iostream>
#include<set>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b;
    set<int> m;
    for(int i=0; i<a; i++){
        cin >> c;
        m.insert(c);
    }
    for(int i=0; i<b; i++){
        cin >> c;
        m.insert(c);
    }
    set<int>::iterator it = m.begin();
    for(int i=0; i<m.size(); i++)
        cout << *it++ << " \n"[i== m.size()-1];
    return 0;
}