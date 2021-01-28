#include<stdio.h>
int TC[100000];
int main(){
    int M, N, i=0, j;
    while(scanf("%d %d", &M, &N) != -1){
        TC[i++] = M*N-1;
    }
    for(j=0; j<i; j++){
        printf("%d\n", TC[j]);
    }

    return 0;
}
