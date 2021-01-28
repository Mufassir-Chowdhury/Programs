#include<iostream>
#include<map>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    string input, result = "", format = "";
    map <char, int> cnt;
    vector <int> values;
    cin >> n;
    getline(cin, input);
    while(n--){
        getline(cin, input);
        result += input;
    }
    for(auto i:result)
        if(isalpha(i))
            format += toupper(i);
    for(auto i:format){
        if(cnt.count(i))
            cnt[i]++;
        else
            cnt[i] = 1;
    }
    for(auto i: cnt)
        values.push_back(i.second);
    sort(values.begin(), values.end(), greater<int>());
    for(auto i:values){
        for(auto j:cnt){
            if(i==j.second){
                cout << j.first << " " << j.second << endl;
                cnt.erase(j.first);
                break;
            }
        }
    }
    return 0;
}