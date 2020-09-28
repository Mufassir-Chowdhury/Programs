#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n, lies = 0, init = 2;
        cin >> n;
        int a[n];
        for(int j=0; j<n; j++)
            cin >> a[j];
        for(int j=0; j<n; j++){
            if(a[j] - init < 6 && a[j] - init)
                lies++;
            else
                lies += (a[j] - init) / 5 + 1;
            init = a[j];
        }
        cout << "Case " << i << ": " << lies << endl;
    }
    return 0;
}