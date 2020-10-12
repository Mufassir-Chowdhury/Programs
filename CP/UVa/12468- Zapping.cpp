#include<iostream>
using namespace std;

int main(){
    int a, b;
    while((cin >> a >> b) && a != -1 && b != -1){
        int change = abs(a-b);
        if(change > 50)
            cout << 100 - change << endl;
        else
            cout << change << endl;
    }
    return 0;
}