#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    int n = 100000000;
    vector <int> sieve;
    vector <bool> prime(n+1, true);
    prime[0] = false;
    prime[1] = false;
    for(int i=2; i<= sqrt(n); i++){
        if(prime[i]){
            for(int j=i*i; j<=n; j+=i){
                prime[j] = false;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(prime[i]){
            sieve.push_back(i);
        }
    }
    for(int i=0; i<sieve.size(); i+=100){
        cout << sieve[i] << endl;
    }
    return 0;
}