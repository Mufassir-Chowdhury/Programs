#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int arr[n];
        for(int i=0; i<n;i ++)
            cin >> arr[i];
        bool diff[n] = {0};
        for(int i=0; i<n-1; i++)
            if(abs(arr[i] - arr[i+1]) < n)
                diff[abs(arr[i] - arr[i+1])] = 1;
        bool ok = 1;
        for(int i=1; i<n; i++)
            if(!diff[i])
                ok = 0;
        if(ok)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }
    return 0;
}