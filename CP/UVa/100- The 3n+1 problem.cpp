#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int list[1000000], a, b;
    list[1] = 1;
    for(int i=2; i<1000000; i++){
        int total = 1; 
        int n= i;
        while(n != 1){
            if(n % 2)
                n = 3*n+1;
            else
                n /= 2;
            total++;
        }
        list[i] = total;
    }
    while(cin >> a >> b){
    	if(b==a)
    		cout << a << " " << b << " " << list[b] << endl;
    	if(b>a)
        	cout << a << " " << b << " " << *(max_element(list+a, list+b)) << endl;
    	if(a>b)
    		cout << a << " " << b << " " << *(max_element(list+b, list+a)) << endl;
    }
    return 0;
}