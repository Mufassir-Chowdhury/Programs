#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    long int arr[100000000];
    arr[1] = 0;
    for(int i=2; i<10000000; i++){
        if((i%3)-1)
            arr[i] = arr[i-1] + 1;
        else{
            arr[i] = arr[i-1];
        }
    }
    for(int i=1; i<10; i++)
        cout << arr[i] << endl;
    for(int i=1; i<=t; i++){
        int a, b, tot = 0;
        cin >> a >> b;
        for(int j=a; j<=b; j++)
            if((j%3)-1)
                tot++;
        cout << "Case " << i << ": " << tot << endl;
    }
    return 0;
}