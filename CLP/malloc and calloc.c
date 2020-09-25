#include<stdio.h>
#include<stdlib.h>

void print(float *t, int n){
    for(int i=0; i<n; i++)
        printf("%f; ", t[i]);
    printf("\n");
}

int main(void){
    float *t1 = malloc(5 * sizeof(float));
    float *t2 = calloc(5, sizeof(float));
    print(t1, 5);
    print(t2, 5);
    free(t1);
    free(t2);
    return 0;
}

