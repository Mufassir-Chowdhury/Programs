#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    while((cin >> n) && n){
        int cnt = 0;
        for(int i=1; i<sqrt(n); i++){
            if( n % i == 0 ){
                if(n/i == i)
                    cnt++;
                else
                    cnt += 2;
            }
        }
        cnt /= 2;
        cout << cnt << endl;
        if(cnt % 2)
            cout << "yes" << endl;
        else 
            cout << "no" << endl;
    }
    return 0;
}