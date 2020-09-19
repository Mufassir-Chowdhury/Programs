#include<iostream>
#include<deque>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    deque <int> d;
    while(n--){
        string query;
        bool rev = 0;
        cin >> query;
        if(query == "back"){
            if(d.empty()){
                cout << "No job for Ada?" << endl;
                continue;
            }
            if(rev){
                cout << d.front() << endl;
                d.pop_front();
            } else{
                cout << d.back() << endl;
                d.pop_back();
            }
        } else if(query == "front"){
            if(d.empty()){
                cout << "No job for Ada?" << endl;
                continue;
            }
            if(rev){
                cout << d.back() << endl;
                d.pop_back();
            } else{
                cout << d.front() << endl;
                d.pop_front();
            }
        } else if(query == "reverse"){
            if(rev)
                rev = 0;
            else rev = 1;
        } else if(query == "push_back"){
            int k;
            cin >> k;
            if(rev)
                d.push_front(k);
            else d.push_back(k);
        } else if(query == "toFront"){
            int k;
            cin >> k;
            if(rev)
                d.push_back(k);
            else d.push_front(k);
        }
    }
    return 0;
}