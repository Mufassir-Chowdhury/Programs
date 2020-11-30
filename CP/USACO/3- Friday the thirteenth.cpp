/*
ID: mac22211
TASK: gift1
LANG: C++                 
*/
#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;

bool leap(int n){
    if(n%4 == 0 && n%100 != 0)
        return true;
    else if(n%400 == 0)
        return true;
    return false;
}

int main(){
    vector <int> weekday(7, 0);
    
    return 0;
}