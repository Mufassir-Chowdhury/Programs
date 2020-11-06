#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    string s;
    bool winner = false;
    stack <char> st;
    cin >> s;
    for(char &i: s){
        if(st.empty() || st.top() != i)
            st.push(i);
        else{
            winner = !winner;
            st.pop();
        }
    }
    if(winner)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}