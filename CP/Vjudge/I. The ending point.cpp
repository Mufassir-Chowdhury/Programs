#include<iostream>
#include<string>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    string c;
    cin >> c;
    for(int i=0; i<c.size(); i++){
        if(c[i] == 'U')
            b++;
        else if(c[i] == 'D')
            b--;
        else if(c[i] == 'L')
            a--;
        else if(c[i] == 'R')
            a++;
    }
    cout << a << " " << b << endl;
    return 0;
}