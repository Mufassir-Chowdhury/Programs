#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    if(b.size()<a.size())
        a.swap(b);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for(int i=0; i<a.size(); i++){
        if(a[i]+b[i]-2*'0'>9){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}