#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int n;
    string str, temp;
    vector<string>two;
    cin >> n >> str;
    cout << str << endl;
    for(int i=1; i<str.size(); i++){
        temp = str[i-1];
        temp.append(str(str[i]));
        cout <<temp << endl;
        two.push_back(temp);
    }
    for(auto i: two)
        cout << i << endl;
}