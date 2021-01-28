#include<bits/stdc++.h>
using namespace std;

int main(){
	double h, m;
	while(true){
		scanf("%lf:%lf", &h, &m);
		if(h == 0. && m == 0.){
			break;
		}
		double angle = fabs(.5*(60*h-11*m));
		if(angle>=180.){
			printf("%.3lf\n", 360-angle);
		} else {
			printf("%.3lf\n", angle);
		}
	}
	return 0;
}