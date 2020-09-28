#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    int correct = 0;
    while(cin >> a){
        char d, e;
        string f;
        cin >> d >> b >> e >> f;
        if(f == "?"){
            continue;
        }
        c = stoi(f, nullptr, 10);
        if(d == '+'){
            if(c == a+b){
                correct++;
            }
        } else{
            if(c == a-b){
                correct++;
            }
        }
    }
    cout << correct << endl;
    return 0;
}