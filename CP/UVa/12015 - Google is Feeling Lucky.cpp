#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        vector<int> rel(10);
        vector<string> url(10);
        for(int j=0; j<10; j++)
            cin >> url[j] >> rel[j];
        int max = *(max_element(rel.begin(), rel.end()));
        cout << "Case #" << i << ":" << endl;
        for(int j=0; j<10; j++)
            if(rel[j] == max)
                cout << url[j] << endl;
    }
    return 0;
}