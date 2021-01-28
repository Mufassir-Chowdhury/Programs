#include<bits/stdc++.h>
using namespace std;

int main(){
    string message;
    string new_message;
    string keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    while(getline(cin, message)){
        for(int i=0; i<message.length(); i++){
            if(message[i] == ' '){
                new_message += " ";
                continue;
            }
            for(int j=0; j<keyboard.length(); j++){
                if(message[i]==keyboard[j]){
                    new_message += keyboard[j-1];
                    break;
                }
            }
        }
        cout << new_message << endl;
        new_message = "";
    }
    return 0;
}