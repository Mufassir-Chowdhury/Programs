#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<bool>sieve(1000001, true);
    sieve[0]= sieve[1] = false;
    for(int i=2; i*i<=sieve.size(); i++)
        if(sieve[i])
            for(int j=i*i; j<=sieve.size(); j+=i)
                sieve[j] = false;
    int n;
    while((cin >> n) && n){
        vector<int> primes;
        for(int i=3; i<=n; i++)
            if(sieve[i])
                primes.push_back(i);
        
    }
    return 0;
}