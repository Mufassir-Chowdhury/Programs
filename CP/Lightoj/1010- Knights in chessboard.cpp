#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<= t; i++){
        int m, n, a;
        cin >> m >> n;
        if(m == 1)
            cout << "Case " << i << ": " << n << endl;
        else if(n == 1)
            cout << "Case " << i << ": " << m << endl;
        else if(m == 2)
        	cout << "Case " << i << ": " << (n%2?n+1:n+2) << endl;
        else if(n == 2)
        	cout << "Case " << i << ": " << (m%2?m+1:m+2) << endl;
        else
            cout << "Case " << i << ": " << ceil((double)m*(double)n/2.) << endl;
    }
    return 0;
}