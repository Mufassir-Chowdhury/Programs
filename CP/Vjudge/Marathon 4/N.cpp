#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int x1, x2, y1, y2, x3, y3, x4, y4, a1, b1, c1, a2, b2, c2, d, dx, dy, t;
    cin >> t;
    cout << "INTERSECTING LINES OUTPUT" << endl;
    while(t--){
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        a1 = y1-y2;
        b1 = x2-x1;
        c1 = a1*x1 + b1*y1;
        a2 = y3-y4;
        b2 = x4-x3;
        c2 = a2*x3 + b2*y3;
        d = a1*b2 - a2*b1;
        dx = c1*b2 - c2*b1;
        dy = a1*c2 - a2*c1;
        if(d == 0 && (dx || dy))
            cout << "NONE" << endl;
        else if(d == 0 && dx == 0 && dy == 0)
            cout << "LINE" << endl;
        else 
            cout << "POINT " << fixed << setprecision(2) << (double)dx/d << " " << (double)dy/d << endl;
    }
    cout << "END OF OUTPUT" << endl;
    return 0;
}