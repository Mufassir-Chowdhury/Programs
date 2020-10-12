#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int tiles = ceil(((double)n-2)/3) * ceil(((double)m-2)/3);
        cout << tiles << endl;
    }
    return 0;
}