#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    cout << "Lumberjacks:" << endl;
    while(t--){
        int order[10];
        for(int i=0; i<10; i++)
            cin >> order[i];
        bool ordered[2] = {true, true};
        for(int i=0; i<9; i++)
            if(order[i] > order[i+1])
                ordered[0] = false;
        for(int i=0; i<9; i++)
            if(order[i] > order[i+1])
                ordered[1] = false;
        if(ordered[0] || ordered[1])
            cout << "Ordered" << endl;
        else
            cout << "Unordered" << endl;
    }
    return 0;
}