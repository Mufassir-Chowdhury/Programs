#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        long long int n, a, b, c; 
        cin >> n;
        c = (long long int)ceil(sqrt(n));
        a = abs(n - (c-1)*(c-1));
        b = abs(c*c+1 - n);
        if(a>c)
            a = c;
        if(b>c)
            b = c;
        if(c%2==1)
        	swap(a,b);
        cout << "Case " << i << ": " << a << " " << b << endl;
    }
    return 0;
}