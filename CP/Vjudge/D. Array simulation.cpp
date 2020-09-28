#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n,m;
        cin >> n >> m;
        int a[n];
        for(int j=0; j<n; j++)
            cin >> a[j];
        for(int j=0; j<m; j++){
            char o;
            cin >> o;
            if(o == 'P'){
                int c, d, temp;
                cin >> c >> d;
                temp = a[d];
                a[d] = a[c];
                a[c] = temp;
            } else if(o == 'S'){
                int c;
                cin >> c;
                for(int k =0; k<n; k++)
                    a[k] += c;
            } else if(o == 'M'){
                int c;
                cin >> c;
                for(int k=0; k<n; k++)
                    a[k] *= c;
            } else if(o == 'D'){
                int c;
                cin >> c;
                for(int k=0; k<n; k++)
                    a[k] /= c;
            } else if(o == 'R'){
                int b[n];
                for(int k=0; k<n; k++)
                    b[k] = a[n-1-k];
                for(int k=0; k<n; k++)
                    a[k] = b[k];
            }
        }
        cout << "Case " << i << ":" << endl;
        for(int j=0; j<n; j++)
            cout << a[j] << " \n"[j==n-1];
    }
    return 0;
}