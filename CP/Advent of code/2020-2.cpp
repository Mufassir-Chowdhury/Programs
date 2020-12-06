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
            for(int k=0; k<prim.size(); k++)
                if(i != j && j!=k && i!=k && prim[i]+prim[j]+prim[k] == 2020)
                    cout << prim[i]*prim[j]*prim[k] << endl;
    return 0;
}