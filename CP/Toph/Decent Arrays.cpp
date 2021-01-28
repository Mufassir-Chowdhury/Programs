#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    bool sorted = true;
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<n-1; i++)
        if(a[i]>a[i+1])
            sorted = false;
    if(sorted)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}