#include<stdio.h>
#include<stdlib.h>

void print(float *t, int n){
    for(int i =0; i<n ;i++)
        printf("%f; ", t[i]);
    printf("\n");
}

int main(){
    float *t = malloc(4 * sizeof(float));
    for(int i=0; i<4; i++)
        t[i] = i+1.;
    print(t, 4);
    t = realloc(t, 5 * sizeof(float));
    print(t, 5);
    t = realloc(t, 3* sizeof(float));
    print(t, 3);
    free(t);
    return 0;
}

