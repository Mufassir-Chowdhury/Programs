#include<stdio.h>
int S[1000000];
int main(){
    int N, i=0, j;
    while(1){
        scanf("%d", &N);
        if(N==0) break;
        S[i++] = N*(N+1)*(2*N+1)/6;
    }
    for(j=0; j<i; j++){
        printf("%d\n", S[j]);
    }


    return 0;
}