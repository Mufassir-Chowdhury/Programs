#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 1)
        cout << 0 << endl;
    else if(n == 2)
        cout << 2 << endl;
    else{
        string num;
        int sum = 0;
        num = to_string(n);
        for(int i=0; i<num.size(); i++){
            sum += num[i] - '0';
            sum *= 10;
            sum %= 100000007;
        }
        cout << sum << endl;
    }
    return 0;
}