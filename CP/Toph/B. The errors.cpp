#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int k=1; k<=t; k++){
        int n, m, a[31], b[31];
        long long sum = 0;
        cin >> n;
        for(int i=0; i<n; i++)
            cin >> a[i];
        cin >> m;
        for(int i=0; i<m; i++){
            cin >> b[i];
            if(b[i]-1 < 0 || b[i]-1 >=n)
                continue;
            long long mult = 1;
            for(int j=0; j<n; j++)
                if(j!= b[i]-1)
                    mult *= a[j];
            if(mult <= 1000000000 && mult >= 0){
                mult /= a[b[i]-1]*a[b[i]-1];
                sum += mult;
            }
        }
        cout << "Case #" << k << ": " << sum << endl;
    }
    return 0;
}