#include<stdio.h>
float TC[102];
int main(){
    int T, i, j;
    float Cn, F, C, d;
    scanf("%d", &T);
    for(i=0; i<T;i++){
        scanf("%f %f", &C, &d);
        F= 9*C/5 + 32;
        F += d;
        Cn = (F-32)*5/9;
        TC[i] = Cn;
    }
    for(j=0; j<i; j++){
        printf("Case %d: %.2f\n", j+1, TC[j]);
    }

    return 0;
}
