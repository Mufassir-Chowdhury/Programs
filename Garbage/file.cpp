#include<fstream>
using namespace std;

int main(){
    int a, b;
    ifstream fin("in.txt");
    ofstream fout("out.txt");
    fin >> a >> b;
    fout << a*b;
    return 0;
}
