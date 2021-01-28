#include<iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    char pass[n+1];
    for(int i=0; i<n; i++){
        if(i%2)
            pass[i] = 'a';
        else
            pass[i] = 'b';
    }
    if(k>2){
        for(int i=0; i<k-2; i++)
            if(i%2)
                pass[i] += i+2;
            else
                pass[i] += i+1;
    }
    pass[n] = '\0';
    cout << pass << endl;
    return 0;
}