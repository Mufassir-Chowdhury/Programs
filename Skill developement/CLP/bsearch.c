#include<stdio.h>
#include<stdlib.h>

void print(float *base, float *found){
    if(found)
        printf("[%ld]\n", found - base);
    else
        printf("(null)\n");
}

int cmp(const void *v1, const void *v2){
    return *((float *) v2) - *((float *) v1);
}

int main(void){
    float t[] = {1., 2., 3., 4., 5.}, key;
    qsort(t, 5, sizeof(t[0]), cmp);
    key = 0.;
    print(t, bsearch(&key, t, sizeof(t)/sizeof(t[0]), sizeof(t[0]), cmp));
    key = 3.;
    print(t, bsearch(&key, t, sizeof(t)/sizeof(t[0]), sizeof(t[0]), cmp));
    key = 6.;
    print(t, bsearch(&key, t, sizeof(t)/sizeof(t[0]), sizeof(t[0]), cmp));
    return 0;
}

