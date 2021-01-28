#include <bits/stdc++.h> 
using namespace std; 

void SieveOfEratosthenes(int n) 
{ 
	bool prime[n+1]; 
	memset(prime, true, sizeof(prime)); 

	for (int p=2; p*p<=n; p++) 
	{ 
		if (prime[p] == true) 
		{ 
			for (int i=p*2; i<=n; i += p) 
				prime[i] = false; 
		} 
	} 

	if(prime[n]){
		cout << "It is a prime word." << endl;
	} else {
		cout << "It is not a prime word." << endl;
	}
} 

// Driver Program to test above function 
int main() 
{ 
	string word;
	while(cin >> word){
		int n =0;
		for(int i=0; i<word.length(); i++){
			if(word[i]>64 && word[i]<91){
				n += word[i]-64+26;
			} else {
				n += word[i]-96;
			}
		}
		SieveOfEratosthenes(n); 
	}
	return 0; 
} 
