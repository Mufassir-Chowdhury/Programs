#include<iostream>
#include<math.h>
#include<bitset>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n;
        cin >> n;
        string bit;
        bit = bitset<32>(n).to_string();
        next_permutation(bit.begin(), bit.end());
        reverse(bit.begin(), bit.end());
        n = 0;
        for(int j=0; j<bit.length(); j++){
            if(bit[j] == '1')
                n += pow(2, j);
        }
        cout << "Case " << i << ": " << n << endl;
    }
    return 0;
}