#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
    int n;
    while((cin >> n) && n){
        while(log10(n)>=1.){
            string nums = to_string(n);
            n = 0;
            for(int i=0; i<nums.size(); i++)
                n += nums[i] - '0';
        }
        cout << n << endl;
    }
    return 0;
}