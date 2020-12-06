#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string mains, reverses;
        cin >> mains;
        bool funny = true;
        reverses = mains;
        reverse(reverses.begin(), reverses.end());
        for(int i=1; i<mains.size(); i++)
            if(abs(mains[i]-mains[i-1])!=abs(reverses[i]-reverses[i-1]))
                funny = false;
        if(funny)
            cout << "Funny" << endl;
        else
            cout << "Not Funny" << endl;
    }
    return 0;
}