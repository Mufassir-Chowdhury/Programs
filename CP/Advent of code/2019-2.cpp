#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, answer = 19690720;
    char s;
    vector <int> numbers;
    while(cin >> n){
        cin >> s;
        numbers.push_back(n);
    }
    numbers[1] = 12;
    numbers[2] = 2;
    for(int i=0; i<numbers.size(); i++){
        if(numbers[i] == 1){
            if(numbers[numbers[i+3]] == 0 && numbers[numbers[i+1]] + numbers[numbers[i+2]] == answer)
                cout << numbers[numbers[i+1]]*100 + numbers[numbers[i+2]] << endl;
            i+=3;
        } else if(numbers[i] == 2){
            if(numbers[numbers[i+3]] == 0 && numbers[numbers[i+1]] * numbers[numbers[i+2]] == answer)
                cout << numbers[numbers[i+1]]*100 + numbers[numbers[i+2]] << endl;
            i+=3;
        } else if(numbers[i] == 99)
            break;
    }
    cout << *numbers.end() << endl;
    return 0;
}