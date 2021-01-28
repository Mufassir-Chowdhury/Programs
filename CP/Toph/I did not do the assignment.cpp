#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <bool> sieve(1001, true);
    sieve[0] = sieve[1] = false;
    for(int i=2; i*i<=sieve.size(); i++)
        if(sieve[i])
            for(int j=i*i; j<=sieve.size(); j+= i)
                sieve[j] = false;
    int n;
    cin >> n;
    if(sieve[n])
        cout << "NO PUNISHMENT" << endl;
    else
        for(int i=0; i<n ;i++)
            cout << "I DID NOT DO THE ASSIGNMENT." << endl;
    return 0;
}