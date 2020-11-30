#include<fstream>
#include<cmath>
using namespace std;

int main(){
    ofstream fout("angles.txt");
    for(int i=0; i<91; i++){
        for(int j=0; j<90; j++){
            fout << i << " " << j << " " << sin(i*180/3.1416)*cos(i*180/3.1416+j*180/3.1416)/(cos(j*180/3.1416)*cos(j*180/3.1416)) << endl;
        }
    }

    return 0;
}