#include<iostream>
using namespace std;

int main(){
    double n;
    while((cin >> n ) && n){
        int card = 1;
        double sum = 0;
        for(int i=2; i<300; i++){
            sum += 1./(double)i;
            if(sum > n)
                break;
            else
                card++;
        }
        cout << card << " card(s)" << endl;
    }
    return 0;
}