#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main(){
    int n, coin, you, twin;
    cin >> n;
    deque <int> coins;
    for(int i=0; i<n; i++){
        cin >> coin;
        coins.push_back(coin);
    }
    if(n==1){
        cout << 1 << endl;
        return 0;
    }
    sort(coins.begin(), coins.end());
    you = coins.back();
    coins.pop_back();
    twin = 0;
    coin = 1;
    for(auto i: coins){
        if(i+twin >= you){
            you += i;
            coin++;
        } else{
            twin += i;
        }
    }
    cout << coin << endl;
    return 0;
}