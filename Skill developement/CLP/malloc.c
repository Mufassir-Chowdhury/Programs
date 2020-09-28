#include<stdio.h>
#include<stdlib.h>

int main(void){
    void *p = malloc(1);
    unsigned long l = (unsigned long) p;
    free(p);
    printf("%p\n", p);
    for(int i=2; i<= 64; i<<= 1)
        printf("%02d -> %s\n", i, (l % i) ? "no" : "yes");
    return 0;
}

