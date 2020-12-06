#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <bool> sieve(10001, true);
    sieve[0] = sieve[1] = false;
    for(int i=2; i*i<=sieve.size(); i++)
        if(sieve[i])
            for(int j=i*i; j<=sieve.size(); j+=i)
                sieve[j]=false;
    int n, c;
    while(cin >> n >> c){
        int num;
        vector <int> primes;
        for(int i=1; i<n; i++)
            if(sieve[i])
                primes.push_back(i);
        if(primes.size()%2)
            num = 2*c-1;
        else
            num = 2*c;
        num = (primes.size()-num)/2;
        cout << num << endl;
        for(int i=0; i<num; i++){
            primes.pop_back();
            primes.erase(primes.begin());
        }
        cout << n << " " << c << ": ";
        for(int i=0; i<primes.size(); i++)
            cout << primes[i] << " \n"[i==primes.size()-1];
    }
    return 0;
}