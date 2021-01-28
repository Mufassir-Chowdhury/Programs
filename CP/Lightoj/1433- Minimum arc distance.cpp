#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        double o1, o2, a1, a2, b1, b2;
        cin >> o1 >> o2 >> a1 >> a2 >> b1 >> b2;
        double m1 = (o2-a2)/(o1-a1);
        double m2 = (o2-b2)/(o2-b2);
        double angle = atan(abs((m2-m1)/(1+m1*m2)));
        if(angle > 180)
            angle = 360 - angle;
        double r = pow((pow(o1-a1,2) + pow(o2-a2, 2)),.5);
        double length = angle*r;
        cout << "Case " << i << ": " << length << endl;
    }
    return 0;
}