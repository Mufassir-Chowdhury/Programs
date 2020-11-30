#include<iostream>
using namespace std;

int main(){
    long long int t;
    cin >> t;
    for(long long int i=1; i<=t; i++){
        long long int a, b;
        cin >> a >> b;
        long long int num = b-a - (b-a)/3;
        if(a==b && a%3!=1)
            num = 1;
        if(a%3==1 && b%3==1 && num )
            num--;
        cout << "Case " << i << ": " << num << endl;
    }
    return 0;
}