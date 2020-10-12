#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int ans = floor((sqrt(1+8*n)-1)/2);
        printf("%lld\n", ans);
    }
    return 0;
}