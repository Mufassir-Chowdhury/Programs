#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    string none;
    getline(cin, none);
    for(int i=1; i<=t; i++){
        string name1, name2;
        getline(cin, name1);
        getline(cin, name2);
        name1.erase(remove(name1.begin(), name1.end(), ' '), name1.end());
        name2.erase(remove(name2.begin(), name2.end(), ' '), name2.end());
        transform(name1.begin(), name1.end(), name1.begin(), [](unsigned char c){return tolower(c);});
        transform(name2.begin(), name2.end(), name2.begin(), [](unsigned char c){return tolower(c);});
        sort(name1.begin(), name1.end());
        sort(name2.begin(), name2.end());
        cout << "Case " << i << ": ";
        if(name1 == name2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}