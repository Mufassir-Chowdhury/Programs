/*
ID: mac22211
TASK: ride
LANG: C++                 
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    char comet[8], group[8];
    fin >> comet >> group;
    long int cometn = 1;
    long int groupn = 1;
    for(int i=0; i<6 && comet[i] != '\0'; i++){
        if(comet[i] != '\0') cometn *= comet[i] - 'A' +1;
        if(group[i] != '\0') groupn *= group[i] - 'A' +1;
    }
    if(cometn%47 == groupn%47)
        fout << "GO" << endl;
    else
        fout << "STAY" << endl;
    return 0;
}