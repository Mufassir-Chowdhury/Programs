#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string balls;
        int num = 0;
        cin >> balls;
        for(auto i: balls)
            if(i != 'W' && i != 'D' && i != 'N')
                num++;
        if(num > 5){
            if(num/6 > 1)
                cout << num/6 << " OVERS";
            else
                cout << num/6 << " OVER";
        }
        if(num%6){
            if(num > 5)
                cout << " ";
            if(num%6 > 1)
                cout << num%6 << " BALLS";
            else
                cout << num%6 << " BALL";
        }
        cout << endl;
    }
    return 0;
}