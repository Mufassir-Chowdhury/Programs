/*
ID: mac22211
TASK: gift1
LANG: C++                 
*/
#include<fstream>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main(){
    ifstream fin("gift1.in");
    ofstream fout("gift1.out");
    int n;
    fin >> n;
    string name, temp;
    vector <string> namelist;
    map <string, int> money;
    for(int i=0; i<n; i++){
        fin >> name;
        namelist.push_back(name);
    }
    for(auto i: namelist){
        money[i] = 0;
    }
    while(fin >> name){
        int a, b;
        fin >> a >> b;
        money[name] -= a;
        for(int i=0; i<b; i++){
            fin >> temp;
            if(b!= 0)
                money[temp] += a/b;
        }
        if(b!= 0)
            money[name] += a%b;
    }
    for(auto i : namelist)
        fout << i << " " << money[i] << endl;
    return 0;
}