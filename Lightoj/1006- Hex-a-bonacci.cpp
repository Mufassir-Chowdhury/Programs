#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        long long int arr[10001];
        int n;
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] >> n;
        cout << "Case " << i << ": ";
        if(n < 6)
            cout << arr[n] % 10000007 << endl;
        else{
            for(int j=6; j<=n; j++)
                arr[j] = (arr[j-1] + arr[j-2] + arr[j-3] + arr[j-4] + arr[j-5] + arr[j-6]) % 10000007;
            cout << arr[n] % 10000007 << endl;
        }
    }
    return 0;
}