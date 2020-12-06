#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    while((cin >> N) && N){
        int G=0;
        for(int i=1;i<N;i++)
            for(int j=i+1;j<=N;j++)
                G+=__gcd(i, j);
        cout << G << endl;
    }
    return 0;
}