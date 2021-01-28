#include<bits/stdc++.h>
using namespace std;

int main(){
	double r, n;
	while(scanf("%lf %lf", &r, &n) != EOF){
		double area = 0.;
		double angle = 2.*acos(0.0)/n;
		double length = 2.*r*sin(angle);
		double height = r*cos(angle);
		area = .5*height*length*n;
		printf("%.3lf\n", area);
	}
	return 0;
}