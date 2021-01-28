#include<bits/stdc++.h>
using namespace std;

int main(){
	string bit;
	int i=1;
	while(cin >> bit){
		int arr[bit.size()];
		for(int j=0; j<bit.size(); j++){
			if(bit[j] == '1'){
				arr[j] = 1;
			} else{
				arr[j] = 0;
			}
		}
		for(int j=1; j<bit.size(); j++){
			arr[j] += arr[j-1];
		}
		cout << "Case " << i << ":" << endl;
		int n;
		cin >> n;
		for(int j=0; j<n; j++){
			int a, b;
			cin >> a >> b;
			int l = min(a,b);
			int r = max(a,b);
			if(arr[l] == arr[r]  && bit[r] == bit[l]){
				cout << "Yes" << endl;
			} else if(r-l == arr[r]-arr[l]  && bit[r] == bit[l]){
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
		}
		i++;
	}
	return 0;
}