#include<iostream>
#include<string>
using namespace std;

int main(){
    string c;
    int a, b, num = 0;
    cin >> a >> b;
    for(int i=a; i<=b; i++){
        c = to_string(i);
        if(c[0] == c[4] && c[1] == c[3])
            num++;
    }
    cout << num << endl;
    return 0;
}