#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <bool> sieve(n+1, true);
    sieve[0] = false;
    sieve[1] = false;
    for(int i=2; i<=n; i++)
        if(sieve[i])
            for(int j=2*i; j<=n; j+=i)
                sieve[j] = false;
    for(int i=2; i<=n; i++)
        if(sieve[i])
            cout << i << " ";
    cout << endl;
    return 0;
}