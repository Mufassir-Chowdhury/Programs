#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    string line;
    bool valid = true;
    cin >> line;
    stack <char> st;
    for(auto i: line){
        if(i=='(')
            st.push(i);
        else{
            if(st.empty())
                valid = false;
            else
                st.pop();
        }
    }
    if(!st.empty())
        valid = false;
    if(valid)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;    
    return 0;
}