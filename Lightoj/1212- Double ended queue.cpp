#include<iostream>
#include<deque>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 1; i<=t; i++){
        deque <int> d;
        string cmd;
        d.clear();
        int n, m, size = 0;
        cin >> n >> m;
        cout << "Case " << i << ":" << endl;
        while(m--){
            int l;
            cin >> cmd;
            if(cmd == "pushLeft"){
                cin >> l;
                if(size == n){
                    cout << "The queue is full" << endl;
                    continue;
                } else{
                    cout << "Pushed in left: " << l << endl;
                    d.push_front(l);
                    size++;
                }
            } else if(cmd == "pushRight"){
                cin >> l;
                if(size == n){
                    cout << "The queue is full" << endl;
                    continue;
                } else{
                    cout << "Pushed in right: " << l << endl;
                    d.push_back(l);
                    size++;
                }
            } else if(cmd == "popLeft"){
                if(!size){
                    cout << "The queue is empty" << endl;
                    continue;
                } else{
                    cout << "Popped from left: " << d.front() << endl;
                    d.pop_front();
                    size--;
                }
            } else if(cmd == "popRight"){
                if(!size){
                    cout << "The queue is empty" << endl;
                    continue;
                } else{
                    cout << "Popped from right: " << d.back() << endl;
                    d.pop_back();
                    size--;
                }
            }
        }
    }
    return 0;
}