#include<iostream>
#include<bitset>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n;
        cin >> n;
        string bit = bitset<32>(n).to_string();
        n = 0;
        for(int j=0; j<bit.length(); j++){
            if(bit[j] == '1')
                n++;
        }
        cout << "Case " << i << ": " << (n%2? "odd" : "even") << endl;
    }
    return 0;
}