#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <bool> sieve(10000001, true);
    vector <int> prime;
    sieve[0] = sieve[1] = false;
    for(int i=2; i*i<=sieve.size(); i++)
        if(sieve[i])
            for(int j=i*i; j<=sieve.size(); j+=i)
                sieve[j] = false;
    for(int i=0; i<sieve.size(); i++)
        if(sieve[i])
            prime.push_back(i);
    int n;
    cin >> n;
    cout << prime[n-1] << endl;
    return 0;
}