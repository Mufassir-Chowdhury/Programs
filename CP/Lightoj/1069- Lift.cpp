#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i =1 ; i<=t; i++){
        int a, b;
        int time = 19;
        cin >> a >> b;
        time += abs(a-b)*4;
        time += (a)*4;
        cout <<  "Case " << i << ": " << time << endl;
    }
    return 0;
}