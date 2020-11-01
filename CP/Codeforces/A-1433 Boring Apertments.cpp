#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, press = 0;
        cin >> n;
        for(int i=1; i<10; i++){
            bool found = 0;
            int num = i;
            for(int j=1; j<5; j++){
                press += j;
                if(num == n){
                    found = 1;
                    break;
                }
                num = num*10 + i;
            }
            if(found)
                break;
        }
        cout << press << endl;
    }
    return 0;
}