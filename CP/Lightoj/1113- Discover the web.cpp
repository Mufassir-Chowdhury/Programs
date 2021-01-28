#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<= t; i++){
        stack <string> back, forw;
        string cur, temp, cmd;
        cur = "http://www.lightoj.com/";
        cout << "Case " << i << ":" << endl;
        cin >> cmd;
        while(cmd != "QUIT"){
            if(cmd == "VISIT"){
                cin >> temp;
                back.push(cur);
                cur = temp;
                cout << cur << endl;
                while(!forw.empty())
                    forw.pop();
            } else if(cmd == "BACK"){
                if(back.empty())
                    cout << "Ignored" << endl;
                else{
                    forw.push(cur);
                    cur = back.top();
                    back.pop();
                    cout << cur << endl;
                }
            } else if(cmd == "FORWARD"){
                if(forw.empty())
                    cout << "Ignored" << endl;
                else{
                    back.push(cur);
                    cur = forw.top();
                    forw.pop();
                    cout << cur << endl;
                }
            }
            cin >> cmd;
        }
    }
    return 0;
}