#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    string line;
    getline(cin, line);
    while(t--){
        stack <char> brackets;
        bool valid = true;
        getline(cin, line);
        for(auto i: line){
            if(i=='(' || i=='{' || i=='[')
                brackets.push(i);
            else{
                if(i==')' && !brackets.empty() && brackets.top()=='(')
                    brackets.pop();
                else if (i=='}' && !brackets.empty() && brackets.top()=='{')
                    brackets.pop();
                else if(i==']' && !brackets.empty() && brackets.top()=='[')
                    brackets.pop();
                else{
                    valid = false;
                    break;
                }
            }
        }
        if(!brackets.empty())
            valid = false;
        if(valid)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}