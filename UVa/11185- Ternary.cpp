#include<stdio.h>
long long int h[100001];
int main(){
    long long int r, base, N, ternery;
    int i=0, j;
    for(;;){
        scanf("%lld", &N);
        ternery = 0;
        base =1;
        if(N<0) break;
        while(N>0){
            r = N%3;
            ternery += r*base;
            N /=3;
            base *= 10;
        }
        h[i++] = ternery;
    }
    for(j=0; j<i; j++){
        printf("%lld\n", h[j]);
    }

    return 0;
}

