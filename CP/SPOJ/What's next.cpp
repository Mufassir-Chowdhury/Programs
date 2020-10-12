#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    while((cin >> a >> b >> c) && (a || b || c)){
        if(c-b == b-a)
            cout << "AP " << c+b-a << endl;
        else{
            double ans = (double)c*(double)b/(double)a;
            cout << "GP " << (int)ans << endl;
        }
    }
    return 0;
}