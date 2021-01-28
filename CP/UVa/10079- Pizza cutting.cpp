#include<stdio.h>


int main(){
    long long int n, p;
    while(1){
        scanf("%lld", &n);
        if(n<0) break;
        p = n*(n+1)/2 +1;
        printf("%lld\n", p);
    }

    return 0;
}