#include<stdlib.h>
#include<stdio.h>

int cmp(const void *v1, const void *v2){
    return *((float *) v1) - *((float *) v2);
}

int main(void){
    float t[] = {3., 1., 5., 4., 2.};
    qsort(t, 5, sizeof(t[0]), cmp);
    for(int i=0; i<5; i++)
        printf("%f; ", t[i]);
    printf("\n");
    return 0;
}


