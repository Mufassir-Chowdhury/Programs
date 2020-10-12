#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    int a, b;
    while((cin >> a >>  b) && (a || b)){
        char as[10], bs[10];
        sprintf(as, "%09d\0", a);
        sprintf(bs, "%09d\0", b);
        int num = 0, temp = 0;
        for(int i=9; i > -1; i--){
            int sum = as[i] - '0' + bs[i] - '0' + temp;
            if(sum > 9){
                num++;
                temp = sum/10;
            } else
                temp =0;
        }
        if(num == 1)
            cout << num << " carry operation." << endl;
        else if(num > 1)
            cout << num << " carry operations." << endl;
        else
            cout << "No carry operation." << endl;
    }
    return 0;
}