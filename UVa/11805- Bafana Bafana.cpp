#include<stdio.h>
int TC[1001];
int main(){
    int i, T, N, K, P, F;
    scanf("%d", &T);
    for(i=0; i<T; i++){
        scanf("%d %d %d", &N, &K, &P);
        F = (K+P)%N;
        if(F==0){
            F = N;
        }
        TC[i] = F;
    }
    for(i=0; i<T; i++){
        printf("Case %d: %d\n", i+1, TC[i]);
    }
    return 0;
}