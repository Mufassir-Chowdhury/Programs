#include<iostream>
using namespace std;

bool is_leap_year(int year){
    cout << year%4 << endl;
    cout << year%100 << endl;
    cout << year%400 << endl;
    return (year%4 && !(year%100)) || (year % 400);
}

int main(){
    cout << is_leap_year(2015) << endl;
    return 0;
}