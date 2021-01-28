#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, pos = 0, i;
        vector <string> list;
        list.clear();
        string cmd;
        cin >> n;
        while(n--){
            cin >> cmd;
            if(cmd == "LEFT"){
                pos--;
                list.push_back(cmd);
            } else if(cmd == "RIGHT"){
                pos++;
                list.push_back(cmd);
            } else{
                cin >> cmd >> i;
                if(list[--i] == "LEFT"){
                    pos--;
                    list.push_back("LEFT");
                } else{
                    pos++;
                    list.push_back("RIGHT");
                }
            }
        }
        cout << pos << endl;
    }
    return 0;
}