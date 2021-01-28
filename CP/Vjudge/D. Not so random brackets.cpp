#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        stack <char> st;
        bool yes = true;
        cin >> str;
        for(char &i: str){
            if(i == '(' || i == '{' || i == '[')
                st.push(i);
            else{
                if(st.empty()){
                    yes = false;
                    break;
                }
                if((i == ')' && st.top() == '(') || (i == '}' && st.top() == '{') || (i == ']' && st.top() == '['))
                    st.pop();
                else{
                    yes = false;
                    break;
                }
            }
        }
        if(yes && st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}