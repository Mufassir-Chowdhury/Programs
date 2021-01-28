#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
    int n, sum = 0, x;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &x); 
        sum += x;
        printf("%.4lf\n", (double)sum/(double)i);
    }
    return 0;
}