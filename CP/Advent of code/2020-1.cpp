#include<iostream>
#include<vector>
using namespace std;

int main(){
    int year;
    vector <int> prim;
    while(cin >> year)
        prim.push_back(year);
    for(int i=0; i<prim.size(); i++)
        for(int j=0; j<prim.size(); j++)
            if(i != j && prim[i]+prim[j] == 2020)
                cout << prim[i]*prim[j] << endl;
    return 0;
}