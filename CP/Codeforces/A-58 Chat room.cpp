#include<iostream>
#include<string>
using namespace std;

int main(){
    string hello, target = "hello";
    cin >> hello;
    for(auto i: hello)
        if(i==target[0])
            target.erase(target.begin());
    if(target.empty())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}