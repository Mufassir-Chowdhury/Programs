#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int j = 0;
    bool left = true;
    while(getline(cin, str)){
        if(j)
            cout << endl;
        j++;
        string newstr = "";
        for (int i=0; i<str.size(); i++){
            if(str[i] == '\"' && left){
                newstr += "``";
                left = false;
            }
            else if(str[i] == '\"' && !left){
                newstr += "''";
                left = true;
            }
            else
                newstr += str[i];
        }
        cout << newstr;
    }
    return 0;
}