#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string word;
        cin >> word;
        int diff = 0;
        if(word[0] != 'o')
            diff++;
        if(word[1] != 'n')
            diff++;
        if(word[2] != 'e')
            diff++;
        if(diff < 2){
            cout << 1 << endl;
            continue;
        }
        diff = 0;
        if(word[0] != 't')
            diff++;
        if(word[1] != 'w')
            diff++;
        if(word[2] != 'o')
            diff++;
        if(diff < 2){
            cout << 2 << endl;
            continue;
        }
        cout << 3 << endl;
    }
    return 0;
}