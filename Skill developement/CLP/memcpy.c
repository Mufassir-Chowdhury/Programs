#include<stdio.h>
#include<string.h>

int main(void){
    double d1 = 1234.5678, d2 = 0;
    memcpy(&d2, &d1, sizeof(double));
    printf("%f\n", d2);
    return 0;
}


