#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, tcase = 1;
    while((cin >> n) && n){
        int arr[n], num =0;
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<n; i++){
            if(arr[i])
                num++;
            else
                num--;
        }
        cout << "Case " << tcase++ << ": " << num << endl;
    }
}