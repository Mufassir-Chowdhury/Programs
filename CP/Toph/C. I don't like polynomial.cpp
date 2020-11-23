#include<iostream>
#include<cmath>
using namespace std;

int function(long long int n){
    long long int small = ((n+4)/2)*((n+4)/2);
    return small/4;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, sum = 0;
        cin >> n;
        for(long long int i=0; i<=n; i++){
            sum += function(i);
        }
        cout << sum << endl;
    }
    return 0;
}