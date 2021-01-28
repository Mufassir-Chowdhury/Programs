#include<iostream>
#include<string>
using namespace std;

int main(){
    string hajj;
    int tcase = 1;
    while(cin >> hajj && hajj != "*"){
        cout << "Case " << tcase++ << ": ";
        if(hajj == "Hajj")
            cout << "Hajj-e-Akbar" << endl;
        else
            cout << "Hajj-e-Asghar" << endl;
    }
    return 0;
}