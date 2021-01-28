#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int h, m;
        char nth;
        cin >> h >> nth >> m;
        if(h != 6 && h!= 12 ){
            h = 12-h;
            
        }   
        if(m>0){
                h--;
            }
            if(h < 1){
                h = 12;
            }
        if(m != 0 && m != 30){
            m = 60-m;
        }
        printf("%02d:%02d\n", h, m);
    }
    return 0;
}