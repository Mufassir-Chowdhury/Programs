#include<bits/stdc++.h>
using namespace std;

int main(){
    int h1, h2, m1, m2;
    while(true){
        int time = 0;
        cin >> h1 >> m1 >> h2 >> m2;
        if(h1==0 && m1==0 &&h2==0 &&m2 ==0){
            break;
        }
        m1 += 60*h1;
        m2 += 60*h2;
        if((h1==h2 && m1>m2) || h1 >h2){
            time += 24*60 - m1;
            time += m2;
        } else{
            time = m2 - m1;
        }
        cout << time << endl;
    }
    return 0;
}