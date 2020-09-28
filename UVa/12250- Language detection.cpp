#include<iostream>
using namespace std;

int main(){
	string greet;
	int i =1;
	while(true){
		cin >> greet;
		if(greet == "#"){
			break;
		}
		cout << "Case " << i << ": ";
		if(greet == "HELLO"){
			cout << "ENGLISH" << endl;
		} else if(greet == "HOLA"){
			cout << "SPANISH" << endl;
		} else if(greet == "HALLO"){
			cout << "GERMAN" << endl;
		} else if(greet == "BONJOUR"){
			cout << "FRENCH" << endl;
		} else if(greet == "CIAO"){
			cout << "ITALIAN" << endl;
		} else if(greet == "ZDRAVSTVUJTE"){
			cout << "RUSSIAN" << endl;
		} else{
			cout << "UNKNOWN" << endl;
		}
		i++;
	}

	return 0;
}