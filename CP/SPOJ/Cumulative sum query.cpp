#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    int c[n];
    c[0] = a[0];
    for(int i=1; i<n ; i++){
        c[i] = c[i-1] + a[i];
    }
    int q;
    cin >> q;
    while(q--){
        int i, j;
        cin >> i >> j;
        if(i==j){
            cout << a[i] << endl;
        } else if(i>0){
            cout << c[j] - c[i-1] << endl;
        } else{
        	cout << c[j] << endl;
        }
    }

    return 0;
}