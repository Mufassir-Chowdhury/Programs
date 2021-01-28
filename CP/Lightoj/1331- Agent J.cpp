#include<iostream>
#include<math.h>
#include <stdio.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        double R1, R2, R3, area;
        scanf("%lf %lf %lf", &R1, &R2, &R3 );
        double b=R1+R2;
        double a=R1+R3;
        double c=R2+R3;
        double C=acos((a*a+b*b-c*c)/(2*a*b));
        double B=acos((a*a+c*c-b*b)/(2*a*c));
        double A=acos((b*b+c*c-a*a)/(2*b*c));
        double triangle =.5*a*b*sin(C);
        area = triangle-((R1*R1*C)/2.0+(R2*R2*A)/2.0+(R3*R3*B)/2.0);
        printf("Case %d: %.8lf\n", i, area);
    }
    return 0;
}