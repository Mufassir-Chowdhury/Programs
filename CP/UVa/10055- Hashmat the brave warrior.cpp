#include<stdio.h>
#include<stdlib.h>
int main(){
    long int H, O;
    while(~scanf("%ld %ld", &H, &O)){
        printf("%ld\n", abs(O-H));
    }
    return 0;
}