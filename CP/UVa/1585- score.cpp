#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        string score;
        getline(cin, score);
        int cons = 0, points = 0;
        for(int i=0; i<score.size(); i++){
            if(score[i] == 'O')
                points += 1 + cons++;
            else
                cons = 0;
        }
        cout << points << endl;
    }
    return 0;
}