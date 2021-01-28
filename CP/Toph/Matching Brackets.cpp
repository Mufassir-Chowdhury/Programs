#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    stack <char> brackets;
    string line;
    bool valid = true;
    cin >> line;
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
    return 0;
}