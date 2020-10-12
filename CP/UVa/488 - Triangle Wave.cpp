#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string bl;
        getline(cin, bl);
        int h, f;
        cin >> h >> f;
        while(f--){
            for(int i=1; i<=h; i++){
                for(int j=0; j<i; j++)
                    cout << i;
                cout << endl;
            }
            for(int i=h-1; i>=1; i--){
                for(int j=0; j<i; j++)
                    cout << i;
                cout << endl;
            }
            if(f)
                cout << endl;
        }
        if(t)
            cout << endl;
    }
    return 0;
}