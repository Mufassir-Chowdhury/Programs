#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

typedef struct {
    string name;
    int vol;
} list;

bool cmp(const list &v1, const list &v2){
    return v1.vol < v2.vol;    
}

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n, a, b, c;
        string temp;
        cin >> n;
        vector <list> d(n); 
        for(int j=0; j<n; j++){
            cin >> temp >> a >> b >> c;
            d[j].name = temp;
            d[j].vol = a * b * c;
        }
        cout << "Case " << i << ": ";
        
        sort(d.begin(), d.end(), cmp);
        
        if(d[0].vol == d[n-1].vol)
            cout << "no thief" << endl;
        else{
            cout << d[n-1].name << " took chocolate from " << d[0].name << endl; 
        }
    }
    return 0;
}